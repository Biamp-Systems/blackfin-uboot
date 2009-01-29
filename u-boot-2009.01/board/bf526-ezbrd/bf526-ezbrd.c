/*
 * U-boot - main board file
 *
 * Copyright (c) 2005-2009 Analog Devices Inc.
 *
 * Licensed under the GPL-2 or later.
 */

#include <common.h>
#include <config.h>
#include <command.h>
#include <net.h>
#include <netdev.h>
#include <asm/blackfin.h>
#include <asm/net.h>
#include <asm/mach-common/bits/otp.h>

DECLARE_GLOBAL_DATA_PTR;

int checkboard(void)
{
	printf("Board: ADI BF526 EZ-Board board\n");
	printf("       Support: http://blackfin.uclinux.org/\n");
	return 0;
}

phys_size_t initdram(int board_type)
{
	gd->bd->bi_memstart = CONFIG_SYS_SDRAM_BASE;
	gd->bd->bi_memsize = CONFIG_SYS_MAX_RAM_SIZE;
	return gd->bd->bi_memsize;
}

#if defined(CONFIG_BFIN_MAC)
void board_get_enetaddr(uchar *mac_addr)
{
	/* the MAC is stored in OTP memory page 0xDF */
	uint32_t ret;
	uint64_t otp_mac;

	ret = bfrom_OtpRead(0xDF, OTP_LOWER_HALF, &otp_mac);
	if (!(ret & OTP_MASTER_ERROR)) {
		uchar *otp_mac_p = (uchar *)&otp_mac;

		for (ret = 0; ret < 6; ++ret)
			mac_addr[ret] = otp_mac_p[5 - ret];

		if (is_valid_ether_addr(mac_addr))
			return;
	}

	puts("Warning: Generating 'random' MAC address\n");
	bfin_gen_rand_mac(mac_addr);
}

int board_eth_init(bd_t *bis)
{
	return bfin_EMAC_initialize(bis);
}
#endif

#ifdef CONFIG_STATUS_LED
#include <status_led.h>

static void set_led_f(int pf, int state)
{
	switch (state) {
		case STATUS_LED_OFF:      bfin_write_PORTFIO_CLEAR(pf);  break;
		case STATUS_LED_BLINKING: bfin_write_PORTFIO_TOGGLE(pf); break;
		case STATUS_LED_ON:       bfin_write_PORTFIO_SET(pf);    break;
	}
}
static void set_led_g(int pf, int state)
{
	switch (state) {
		case STATUS_LED_OFF:      bfin_write_PORTGIO_CLEAR(pf);  break;
		case STATUS_LED_BLINKING: bfin_write_PORTGIO_TOGGLE(pf); break;
		case STATUS_LED_ON:       bfin_write_PORTGIO_SET(pf);    break;
	}
}

static void set_leds(led_id_t mask, int state)
{
	if (mask & 0x1) set_led_f(PF8, state);
	if (mask & 0x2) set_led_g(PG11, state);
	if (mask & 0x4) set_led_g(PG12, state);
}

void __led_init(led_id_t mask, int state)
{
	bfin_write_PORTF_FER(bfin_read_PORTF_FER() & ~(PF8));
	bfin_write_PORTG_FER(bfin_read_PORTG_FER() & ~(PG11 | PG12));
	bfin_write_PORTFIO_INEN(bfin_read_PORTFIO_INEN() & ~(PF8));
	bfin_write_PORTGIO_INEN(bfin_read_PORTGIO_INEN() & ~(PG11 | PG12));
	bfin_write_PORTFIO_DIR(bfin_read_PORTFIO_DIR() | (PF8));
	bfin_write_PORTGIO_DIR(bfin_read_PORTGIO_DIR() | (PG11 | PG12));
}

void __led_set(led_id_t mask, int state)
{
	set_leds(mask, state);
}

void __led_toggle(led_id_t mask)
{
	set_leds(mask, STATUS_LED_BLINKING);
}

#endif