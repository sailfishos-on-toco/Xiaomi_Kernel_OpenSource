/* Copyright (c) 2019, The Linux Foundation. All rights reserved.
 * Copyright (C) 2021 XiaoMi, Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

#ifndef _SDE_RSC_HW_H_
#define _SDE_RSC_HW_H_

#include <linux/kernel.h>
#include <linux/sde_io_util.h>
#include <linux/sde_rsc.h>

/* display rsc offset */
#define SDE_RSCC_PDC_SEQ_START_ADDR_REG_OFFSET_DRV0	0x020
#define SDE_RSCC_PDC_MATCH_VALUE_LO_REG_OFFSET_DRV0	0x024
#define SDE_RSCC_PDC_MATCH_VALUE_HI_REG_OFFSET_DRV0	0x028
#define SDE_RSCC_PDC_SLAVE_ID_DRV0			0x02c
#define SDE_RSCC_SEQ_PROGRAM_COUNTER			0x408
#define SDE_RSCC_SEQ_CFG_BR_ADDR_0_DRV0			0x410
#define SDE_RSCC_SEQ_CFG_BR_ADDR_1_DRV0			0x414
#define SDE_RSCC_SEQ_MEM_0_DRV0				0x600
#define SDE_RSCC_SOLVER_OVERRIDE_CTRL_DRV0		0xc14
#define SDE_RSCC_ERROR_IRQ_STATUS_DRV0			0x0d0
#define SDE_RSCC_SEQ_BUSY_DRV0				0x404
#define SDE_RSCC_SOLVER_STATUS0_DRV0			0xc24
#define SDE_RSCC_SOLVER_STATUS1_DRV0			0xc28
#define SDE_RSCC_SOLVER_STATUS2_DRV0			0xc2c
#define SDE_RSCC_AMC_TCS_MODE_IRQ_STATUS_DRV0		0x1c00

#define SDE_RSCC_SOFT_WAKEUP_TIME_LO_DRV0		0xc04
#define SDE_RSCC_SOFT_WAKEUP_TIME_HI_DRV0		0xc08
#define SDE_RSCC_MAX_IDLE_DURATION_DRV0			0xc0c
#define SDE_RSC_SOLVER_TIME_SLOT_TABLE_0_DRV0		0x1000
#define SDE_RSC_SOLVER_TIME_SLOT_TABLE_1_DRV0		0x1004
#define SDE_RSC_SOLVER_TIME_SLOT_TABLE_2_DRV0		0x1008
#define SDE_RSC_SOLVER_TIME_SLOT_TABLE_3_DRV0		0x100c

#define SDE_RSC_SOLVER_SOLVER_MODES_ENABLED_DRV0	0xc20
#define SDE_RSC_SOLVER_MODE_PRI_TABLE_SLOT0_PRI0_DRV0	0x1080
#define SDE_RSC_SOLVER_MODE_PRI_TABLE_SLOT1_PRI0_DRV0	0x1100
#define SDE_RSC_SOLVER_MODE_PRI_TABLE_SLOT1_PRI3_DRV0	0x110c
#define SDE_RSC_SOLVER_MODE_PRI_TABLE_SLOT2_PRI0_DRV0	0x1180
#define SDE_RSC_SOLVER_MODE_PRI_TABLE_SLOT2_PRI3_DRV0	0x118c

#define SDE_RSC_SOLVER_OVERRIDE_MODE_DRV0		0xc18
#define SDE_RSC_SOLVER_OVERRIDE_CTRL_DRV0		0xc14
#define SDE_RSC_TIMERS_CONSIDERED_DRV0			0xc00
#define SDE_RSC_SOLVER_OVERRIDE_IDLE_TIME_DRV0		0xc1c

#define SDE_RSC_SOLVER_MODE_PARM0_DRV0_MODE0		0xc30
#define SDE_RSC_SOLVER_MODE_PARM1_DRV0_MODE0		0xc34
#define SDE_RSC_SOLVER_MODE_PARM2_DRV0_MODE0		0xc38
#define SDE_RSC_SOLVER_MODE_PARM3_DRV0_MODE0		0xc40

#define SDE_RSC_SOLVER_MODE_PARM0_DRV0_MODE1		0xc4c
#define SDE_RSC_SOLVER_MODE_PARM1_DRV0_MODE1		0xc50
#define SDE_RSC_SOLVER_MODE_PARM2_DRV0_MODE1		0xc54
#define SDE_RSC_SOLVER_MODE_PARM3_DRV0_MODE1		0xc5c

#define SDE_RSC_SOLVER_MODE_PARM0_DRV0_MODE2		0xc68
#define SDE_RSC_SOLVER_MODE_PARM1_DRV0_MODE2		0xc6c
#define SDE_RSC_SOLVER_MODE_PARM2_DRV0_MODE2		0xc70
#define SDE_RSC_SOLVER_MODE_PARM3_DRV0_MODE2		0xc78

#define SDE_RSCC_TCS_DRV0_CONTROL			0x1c14

#define SDE_RSCC_WRAPPER_CTRL				0x000
#define SDE_RSCC_WRAPPER_OVERRIDE_CTRL			0x004
#define SDE_RSCC_WRAPPER_STATIC_WAKEUP_0		0x008
#define SDE_RSCC_WRAPPER_RSCC_MODE_THRESHOLD		0x00c
#define SDE_RSCC_WRAPPER_DEBUG_BUS			0x010
#define SDE_RSCC_WRAPPER_VSYNC_TIMESTAMP0		0x018
#define SDE_RSCC_WRAPPER_VSYNC_TIMESTAMP1		0x01c
#define SDE_RSCC_SPARE_PWR_EVENT			0x020
#define SDE_RSCC_PWR_CTRL				0x024
#define SDE_RSCC_WRAPPER_OVERRIDE_CTRL2			0x040
#define SDE_RSCC_WRAPPER_MODE_MIN_THRESHOLD		0x044
#define SDE_RSCC_WRAPPER_BW_INDICATION			0x048
#define SDE_RSCC_WRAPPER_DEBUG_CTRL2			0x050

/* qtimer offset */
#define SDE_RSCC_QTMR_AC_HW_FRAME_SEL_1			0x1FE0
#define SDE_RSCC_QTMR_AC_HW_FRAME_SEL_2			0x1FF0
#define SDE_RSCC_QTMR_AC_CNTACR0_FG0			0x1040
#define SDE_RSCC_QTMR_AC_CNTACR1_FG0			0x1044
#define SDE_RSCC_F0_QTMR_V1_CNTP_CVAL_LO		0x2020
#define SDE_RSCC_F0_QTMR_V1_CNTP_CVAL_HI		0x2024
#define SDE_RSCC_F1_QTMR_V1_CNTP_CVAL_LO		0x3020
#define SDE_RSCC_F1_QTMR_V1_CNTP_CVAL_HI		0x3024
#define SDE_RSCC_F0_QTMR_V1_CNTP_CTL			0x202C
#define SDE_RSCC_F1_QTMR_V1_CNTP_CTL			0x302C

#define MAX_CHECK_LOOPS			500
#define POWER_CTRL_BIT_12		12

#define SDE_RSC_MODE_0_VAL		0
#define SDE_RSC_MODE_1_VAL		1
#define MAX_MODE2_ENTRY_TRY		3

int rsc_hw_vsync(struct sde_rsc_priv *rsc, enum rsc_vsync_req request,
		char *buffer, int buffer_size, u32 mode);

bool rsc_hw_is_amc_mode(struct sde_rsc_priv *rsc);

void rsc_hw_debug_dump(struct sde_rsc_priv *rsc, u32 mux_sel);

int sde_rsc_debug_show(struct seq_file *s, struct sde_rsc_priv *rsc);

int rsc_hw_mode_ctrl(struct sde_rsc_priv *rsc, enum rsc_mode_req request,
		char *buffer, int buffer_size, u32 mode);

int sde_rsc_mode2_exit(struct sde_rsc_priv *rsc, enum sde_rsc_state state);

int rsc_hw_tcs_use_ok(struct sde_rsc_priv *rsc);

int rsc_hw_tcs_wait(struct sde_rsc_priv *rsc);

#endif /* _SDE_RSC_HW_H_ */
