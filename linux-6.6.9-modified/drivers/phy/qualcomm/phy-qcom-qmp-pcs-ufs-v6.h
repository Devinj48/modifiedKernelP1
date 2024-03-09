/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (c) 2023, Linaro Limited
 */

#ifndef QCOM_PHY_QMP_PCS_UFS_V6_H_
#define QCOM_PHY_QMP_PCS_UFS_V6_H_

/* Only for QMP V6 PHY - UFS PCS registers */
#define QPHY_V6_PCS_UFS_PHY_START			0x000
#define QPHY_V6_PCS_UFS_POWER_DOWN_CONTROL		0x004
#define QPHY_V6_PCS_UFS_SW_RESET			0x008
#define QPHY_V6_PCS_UFS_TIMER_20US_CORECLK_STEPS_MSB	0x00c
#define QPHY_V6_PCS_UFS_TIMER_20US_CORECLK_STEPS_LSB	0x010
#define QPHY_V6_PCS_UFS_PLL_CNTL			0x02c
#define QPHY_V6_PCS_UFS_TX_LARGE_AMP_DRV_LVL		0x030
#define QPHY_V6_PCS_UFS_TX_SMALL_AMP_DRV_LVL		0x038
#define QPHY_V6_PCS_UFS_BIST_FIXED_PAT_CTRL		0x060
#define QPHY_V6_PCS_UFS_TX_HSGEAR_CAPABILITY		0x074
#define QPHY_V6_PCS_UFS_RX_HSGEAR_CAPABILITY		0x0bc
#define QPHY_V6_PCS_UFS_DEBUG_BUS_CLKSEL		0x158
#define QPHY_V6_PCS_UFS_LINECFG_DISABLE			0x17c
#define QPHY_V6_PCS_UFS_RX_MIN_HIBERN8_TIME		0x184
#define QPHY_V6_PCS_UFS_RX_SIGDET_CTRL2			0x18c
#define QPHY_V6_PCS_UFS_TX_PWM_GEAR_BAND		0x178
#define QPHY_V6_PCS_UFS_TX_HS_GEAR_BAND			0x174
#define QPHY_V6_PCS_UFS_READY_STATUS			0x1a8
#define QPHY_V6_PCS_UFS_TX_MID_TERM_CTRL1		0x1f4
#define QPHY_V6_PCS_UFS_MULTI_LANE_CTRL1		0x1fc

#endif
