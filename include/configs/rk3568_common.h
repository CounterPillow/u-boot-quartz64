/* SPDX-License-Identifier:     GPL-2.0+ */
/*
 * (C) Copyright 2021 Rockchip Electronics Co., Ltd
 */

#ifndef __CONFIG_RK3568_COMMON_H
#define __CONFIG_RK3568_COMMON_H

#include "rockchip-common.h"

#define CFG_IRAM_BASE		0xfdcc0000

#define CFG_SYS_SDRAM_BASE		0
#define SDRAM_MAX_SIZE			0xf0000000

#define ENV_MEM_LAYOUT_SETTINGS		\
	"scriptaddr=0x00c00000\0"	\
	"pxefile_addr_r=0x00e00000\0"	\
	"fdtoverlay_addr_r=0x0a000000\0" \
	"fdt_addr_r=0x0a100000\0"	\
	"kernel_addr_r=0x02080000\0"	\
	"ramdisk_addr_r=0x0a200000\0"	\
	"kernel_comp_addr_r=0x0f000000\0" \
	"kernel_comp_size=0x2000000\0"

#include <config_distro_bootcmd.h>
#define CFG_EXTRA_ENV_SETTINGS		\
	ENV_MEM_LAYOUT_SETTINGS			\
	"fdtfile=" CONFIG_DEFAULT_FDT_FILE "\0" \
	"partitions=" PARTS_DEFAULT		\
	ROCKCHIP_DEVICE_SETTINGS		\
	BOOTENV

#endif
