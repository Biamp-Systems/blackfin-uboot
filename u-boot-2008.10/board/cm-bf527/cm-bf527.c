/*
 * U-boot - main board file
 *
 * Copyright (c) 2005-2009 Analog Devices Inc.
 *
 * Licensed under the GPL-2 or later.
 */

#include <common.h>
#include <config.h>
#include <net.h>
#include <netdev.h>
#include <asm/blackfin.h>
#include <asm/net.h>
#include <asm/mach-common/bits/otp.h>

DECLARE_GLOBAL_DATA_PTR;

int checkboard(void)
{
	printf("Board: Bluetechnix CM-BF527 board\n");
	printf("       Support: http://www.bluetechnix.at/\n");
	return 0;
}

phys_size_t initdram(int board_type)
{
	gd->bd->bi_memstart = CFG_SDRAM_BASE;
	gd->bd->bi_memsize = CFG_MAX_RAM_SIZE;
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
