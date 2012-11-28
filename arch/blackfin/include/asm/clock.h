
/*
 * Copyright (C) 2012 Analog Devices Inc.
 * Licensed under the GPL-2 or later.
 */

#ifndef __CLOCK_H__
#define __CLOCK_H__

#include <asm/blackfin.h>
#ifdef PLL_CTL
#include <asm/mach-common/bits/pll.h>
# define pll_is_bypassed() (bfin_read_PLL_STAT() & DF)
#else
#include <asm/mach-common/bits/cgu.h>
# define pll_is_bypassed() (bfin_read_CGU_STAT() & PLLBP)
# define bfin_read_PLL_CTL() bfin_read_CGU_CTL()
# define bfin_read_PLL_DIV() bfin_read_CGU_DIV()
# define SSEL SYSSEL
# define SSEL_P SYSSEL_P
#endif

__attribute__((always_inline))
static inline uint32_t early_division(uint32_t dividend, uint32_t divisor)
{
	uint32_t quotient;
	uint32_t i;

	for (i = 0; i < 5; i++) {
		if (divisor == (1 << i)) {
			quotient = dividend >> i;
			return quotient;
		}
	}

	if (divisor) {
		for (quotient = 0; dividend >= divisor; ++quotient)
			dividend -= divisor;
	} else
		quotient = dividend;

	return quotient;
}

__attribute__((always_inline))
static inline uint32_t early_get_uart_clk(void)
{
	uint32_t msel, pll_ctl, vco;
	uint32_t div, ssel, sclk, uclk;

	pll_ctl = bfin_read_PLL_CTL();
	msel = (pll_ctl & MSEL) >> MSEL_P;
	if (msel == 0)
		msel = (MSEL >> MSEL_P) + 1;

	vco = (CONFIG_CLKIN_HZ >> (pll_ctl & DF)) * msel;
	sclk = vco;
	if (!pll_is_bypassed()) {
		div = bfin_read_PLL_DIV();
		ssel = (div & SSEL) >> SSEL_P;
		sclk = early_division(vco, ssel);
	}
	uclk = sclk;
#ifdef CGU_DIV
	ssel = (div & S0SEL) >> S0SEL_P;
	uclk = early_division(sclk, ssel);
#endif
	return uclk;
}

#ifdef CGU_DIV
# define get_uart_clk get_sclk0
#else
# define get_uart_clk get_sclk
#endif

#endif
