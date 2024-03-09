/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (c) 2018, The Linux Foundation. All rights reserved.
 */

#ifndef _DT_BINDINGS_CLK_QCOM_GCC_QCS404_H
#define _DT_BINDINGS_CLK_QCOM_GCC_QCS404_H

#define GCC_APSS_AHB_CLK_SRC				0
#define GCC_BLSP1_QUP0_I2C_APPS_CLK_SRC			1
#define GCC_BLSP1_QUP0_SPI_APPS_CLK_SRC			2
#define GCC_BLSP1_QUP1_I2C_APPS_CLK_SRC			3
#define GCC_BLSP1_QUP1_SPI_APPS_CLK_SRC			4
#define GCC_BLSP1_QUP2_I2C_APPS_CLK_SRC			5
#define GCC_BLSP1_QUP2_SPI_APPS_CLK_SRC			6
#define GCC_BLSP1_QUP3_I2C_APPS_CLK_SRC			7
#define GCC_BLSP1_QUP3_SPI_APPS_CLK_SRC			8
#define GCC_BLSP1_QUP4_I2C_APPS_CLK_SRC			9
#define GCC_BLSP1_QUP4_SPI_APPS_CLK_SRC			10
#define GCC_BLSP1_UART0_APPS_CLK_SRC			11
#define GCC_BLSP1_UART1_APPS_CLK_SRC			12
#define GCC_BLSP1_UART2_APPS_CLK_SRC			13
#define GCC_BLSP1_UART3_APPS_CLK_SRC			14
#define GCC_BLSP2_QUP0_I2C_APPS_CLK_SRC			15
#define GCC_BLSP2_QUP0_SPI_APPS_CLK_SRC			16
#define GCC_BLSP2_UART0_APPS_CLK_SRC			17
#define GCC_BYTE0_CLK_SRC				18
#define GCC_EMAC_CLK_SRC				19
#define GCC_EMAC_PTP_CLK_SRC				20
#define GCC_ESC0_CLK_SRC				21
#define GCC_APSS_AHB_CLK				22
#define GCC_APSS_AXI_CLK				23
#define GCC_BIMC_APSS_AXI_CLK				24
#define GCC_BIMC_GFX_CLK				25
#define GCC_BIMC_MDSS_CLK				26
#define GCC_BLSP1_AHB_CLK				27
#define GCC_BLSP1_QUP0_I2C_APPS_CLK			28
#define GCC_BLSP1_QUP0_SPI_APPS_CLK			29
#define GCC_BLSP1_QUP1_I2C_APPS_CLK			30
#define GCC_BLSP1_QUP1_SPI_APPS_CLK			31
#define GCC_BLSP1_QUP2_I2C_APPS_CLK			32
#define GCC_BLSP1_QUP2_SPI_APPS_CLK			33
#define GCC_BLSP1_QUP3_I2C_APPS_CLK			34
#define GCC_BLSP1_QUP3_SPI_APPS_CLK			35
#define GCC_BLSP1_QUP4_I2C_APPS_CLK			36
#define GCC_BLSP1_QUP4_SPI_APPS_CLK			37
#define GCC_BLSP1_UART0_APPS_CLK			38
#define GCC_BLSP1_UART1_APPS_CLK			39
#define GCC_BLSP1_UART2_APPS_CLK			40
#define GCC_BLSP1_UART3_APPS_CLK			41
#define GCC_BLSP2_AHB_CLK				42
#define GCC_BLSP2_QUP0_I2C_APPS_CLK			43
#define GCC_BLSP2_QUP0_SPI_APPS_CLK			44
#define GCC_BLSP2_UART0_APPS_CLK			45
#define GCC_BOOT_ROM_AHB_CLK				46
#define GCC_DCC_CLK					47
#define GCC_GENI_IR_H_CLK				48
#define GCC_ETH_AXI_CLK					49
#define GCC_ETH_PTP_CLK					50
#define GCC_ETH_RGMII_CLK				51
#define GCC_ETH_SLAVE_AHB_CLK				52
#define GCC_GENI_IR_S_CLK				53
#define GCC_GP1_CLK					54
#define GCC_GP2_CLK					55
#define GCC_GP3_CLK					56
#define GCC_MDSS_AHB_CLK				57
#define GCC_MDSS_AXI_CLK				58
#define GCC_MDSS_BYTE0_CLK				59
#define GCC_MDSS_ESC0_CLK				60
#define GCC_MDSS_HDMI_APP_CLK				61
#define GCC_MDSS_HDMI_PCLK_CLK				62
#define GCC_MDSS_MDP_CLK				63
#define GCC_MDSS_PCLK0_CLK				64
#define GCC_MDSS_VSYNC_CLK				65
#define GCC_OXILI_AHB_CLK				66
#define GCC_OXILI_GFX3D_CLK				67
#define GCC_PCIE_0_AUX_CLK				68
#define GCC_PCIE_0_CFG_AHB_CLK				69
#define GCC_PCIE_0_MSTR_AXI_CLK				70
#define GCC_PCIE_0_PIPE_CLK				71
#define GCC_PCIE_0_SLV_AXI_CLK				72
#define GCC_PCNOC_USB2_CLK				73
#define GCC_PCNOC_USB3_CLK				74
#define GCC_PDM2_CLK					75
#define GCC_PDM_AHB_CLK					76
#define GCC_VSYNC_CLK_SRC				77
#define GCC_PRNG_AHB_CLK				78
#define GCC_PWM0_XO512_CLK				79
#define GCC_PWM1_XO512_CLK				80
#define GCC_PWM2_XO512_CLK				81
#define GCC_SDCC1_AHB_CLK				82
#define GCC_SDCC1_APPS_CLK				83
#define GCC_SDCC1_ICE_CORE_CLK				84
#define GCC_SDCC2_AHB_CLK				85
#define GCC_SDCC2_APPS_CLK				86
#define GCC_SYS_NOC_USB3_CLK				87
#define GCC_USB20_MOCK_UTMI_CLK				88
#define GCC_USB2A_PHY_SLEEP_CLK				89
#define GCC_USB30_MASTER_CLK				90
#define GCC_USB30_MOCK_UTMI_CLK				91
#define GCC_USB30_SLEEP_CLK				92
#define GCC_USB3_PHY_AUX_CLK				93
#define GCC_USB3_PHY_PIPE_CLK				94
#define GCC_USB_HS_PHY_CFG_AHB_CLK			95
#define GCC_USB_HS_SYSTEM_CLK				96
#define GCC_GFX3D_CLK_SRC				97
#define GCC_GP1_CLK_SRC					98
#define GCC_GP2_CLK_SRC					99
#define GCC_GP3_CLK_SRC					100
#define GCC_GPLL0_OUT_MAIN				101
#define GCC_GPLL1_OUT_MAIN				102
#define GCC_GPLL3_OUT_MAIN				103
#define GCC_GPLL4_OUT_MAIN				104
#define GCC_HDMI_APP_CLK_SRC				105
#define GCC_HDMI_PCLK_CLK_SRC				106
#define GCC_MDP_CLK_SRC					107
#define GCC_PCIE_0_AUX_CLK_SRC				108
#define GCC_PCIE_0_PIPE_CLK_SRC				109
#define GCC_PCLK0_CLK_SRC				110
#define GCC_PDM2_CLK_SRC				111
#define GCC_SDCC1_APPS_CLK_SRC				112
#define GCC_SDCC1_ICE_CORE_CLK_SRC			113
#define GCC_SDCC2_APPS_CLK_SRC				114
#define GCC_USB20_MOCK_UTMI_CLK_SRC			115
#define GCC_USB30_MASTER_CLK_SRC			116
#define GCC_USB30_MOCK_UTMI_CLK_SRC			117
#define GCC_USB3_PHY_AUX_CLK_SRC			118
#define GCC_USB_HS_SYSTEM_CLK_SRC			119
#define GCC_GPLL0_AO_CLK_SRC				120
#define GCC_USB_HS_INACTIVITY_TIMERS_CLK		122
#define GCC_GPLL0_AO_OUT_MAIN				123
#define GCC_GPLL0_SLEEP_CLK_SRC				124
#define GCC_GPLL6					125
#define GCC_GPLL6_OUT_AUX				126
#define GCC_MDSS_MDP_VOTE_CLK				127
#define GCC_MDSS_ROTATOR_VOTE_CLK			128
#define GCC_BIMC_GPU_CLK				129
#define GCC_GTCU_AHB_CLK				130
#define GCC_GFX_TCU_CLK					131
#define GCC_GFX_TBU_CLK					132
#define GCC_SMMU_CFG_CLK				133
#define GCC_APSS_TCU_CLK				134
#define GCC_CRYPTO_AHB_CLK				135
#define GCC_CRYPTO_AXI_CLK				136
#define GCC_CRYPTO_CLK					137
#define GCC_MDP_TBU_CLK					138
#define GCC_QDSS_DAP_CLK				139
#define GCC_DCC_XO_CLK					140
#define GCC_WCSS_Q6_AHB_CLK				141
#define GCC_WCSS_Q6_AXIM_CLK				142
#define GCC_CDSP_CFG_AHB_CLK				143
#define GCC_BIMC_CDSP_CLK				144
#define GCC_CDSP_TBU_CLK				145
#define GCC_CDSP_BIMC_CLK_SRC				146

#define GCC_GENI_IR_BCR					0
#define GCC_USB_HS_BCR					1
#define GCC_USB2_HS_PHY_ONLY_BCR			2
#define GCC_QUSB2_PHY_BCR				3
#define GCC_USB_HS_PHY_CFG_AHB_BCR			4
#define GCC_USB2A_PHY_BCR				5
#define GCC_USB3_PHY_BCR				6
#define GCC_USB_30_BCR					7
#define GCC_USB3PHY_PHY_BCR				8
#define GCC_PCIE_0_BCR					9
#define GCC_PCIE_0_PHY_BCR				10
#define GCC_PCIE_0_LINK_DOWN_BCR			11
#define GCC_PCIEPHY_0_PHY_BCR				12
#define GCC_EMAC_BCR					13
#define GCC_CDSP_RESTART				14
#define GCC_PCIE_0_AXI_MASTER_STICKY_ARES		15
#define GCC_PCIE_0_AHB_ARES				16
#define GCC_PCIE_0_AXI_SLAVE_ARES			17
#define GCC_PCIE_0_AXI_MASTER_ARES			18
#define GCC_PCIE_0_CORE_STICKY_ARES			19
#define GCC_PCIE_0_SLEEP_ARES				20
#define GCC_PCIE_0_PIPE_ARES				21
#define GCC_WDSP_RESTART				22

/* Indexes for GDSCs */
#define MDSS_GDSC				0
#define OXILI_GDSC				1

#endif
