/* SPDX-License-Identifier: (GPL-2.0-or-later OR BSD-3-Clause) */
/*
 * Imported from the Linux kernel file drivers/usb/dwc2/hw.h, commit
 * a89bae709b3492b478480a2c9734e7e9393b279c ("usb: dwc2: Move
 * UTMI_PHY_DATA defines closer")
 *
 * hw.h - DesignWare HS OTG Controller hardware definitions
 *
 * Copyright 2004-2013 Synopsys, Inc.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions, and the following disclaimer,
 *    without modification.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. The names of the above-listed copyright holders may not be used
 *    to endorse or promote products derived from this software without
 *    specific prior written permission.
 *
 * ALTERNATIVELY, this software may be distributed under the terms of the
 * GNU General Public License ("GPL") as published by the Free Software
 * Foundation; either version 2 of the License, or (at your option) any
 * later version.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS
 * IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
 * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef DWC2_REGS_H
#define DWC2_REGS_H

#define HSOTG_REG(x)    (x)

#define GOTGCTL                         HSOTG_REG(0x000)
#define GOTGCTL_CHIRPEN                 BIT(27)
#define GOTGCTL_MULT_VALID_BC_MASK      (0x1f << 22)
#define GOTGCTL_MULT_VALID_BC_SHIFT     22
#define GOTGCTL_OTGVER                  BIT(20)
#define GOTGCTL_BSESVLD                 BIT(19)
#define GOTGCTL_ASESVLD                 BIT(18)
#define GOTGCTL_DBNC_SHORT              BIT(17)
#define GOTGCTL_CONID_B                 BIT(16)
#define GOTGCTL_DBNCE_FLTR_BYPASS       BIT(15)
#define GOTGCTL_DEVHNPEN                BIT(11)
#define GOTGCTL_HSTSETHNPEN             BIT(10)
#define GOTGCTL_HNPREQ                  BIT(9)
#define GOTGCTL_HSTNEGSCS               BIT(8)
#define GOTGCTL_SESREQ                  BIT(1)
#define GOTGCTL_SESREQSCS               BIT(0)

#define GOTGINT                         HSOTG_REG(0x004)
#define GOTGINT_DBNCE_DONE              BIT(19)
#define GOTGINT_A_DEV_TOUT_CHG          BIT(18)
#define GOTGINT_HST_NEG_DET             BIT(17)
#define GOTGINT_HST_NEG_SUC_STS_CHNG    BIT(9)
#define GOTGINT_SES_REQ_SUC_STS_CHNG    BIT(8)
#define GOTGINT_SES_END_DET             BIT(2)

#define GAHBCFG                         HSOTG_REG(0x008)
#define GAHBCFG_AHB_SINGLE              BIT(23)
#define GAHBCFG_NOTI_ALL_DMA_WRIT       BIT(22)
#define GAHBCFG_REM_MEM_SUPP            BIT(21)
#define GAHBCFG_P_TXF_EMP_LVL           BIT(8)
#define GAHBCFG_NP_TXF_EMP_LVL          BIT(7)
#define GAHBCFG_DMA_EN                  BIT(5)
#define GAHBCFG_HBSTLEN_MASK            (0xf << 1)
#define GAHBCFG_HBSTLEN_SHIFT           1
#define GAHBCFG_HBSTLEN_SINGLE          0
#define GAHBCFG_HBSTLEN_INCR            1
#define GAHBCFG_HBSTLEN_INCR4           3
#define GAHBCFG_HBSTLEN_INCR8           5
#define GAHBCFG_HBSTLEN_INCR16          7
#define GAHBCFG_GLBL_INTR_EN            BIT(0)
#define GAHBCFG_CTRL_MASK               (GAHBCFG_P_TXF_EMP_LVL | \
                                         GAHBCFG_NP_TXF_EMP_LVL | \
                                         GAHBCFG_DMA_EN | \
                                         GAHBCFG_GLBL_INTR_EN)

#define GUSBCFG                         HSOTG_REG(0x00C)
#define GUSBCFG_FORCEDEVMODE            BIT(30)
#define GUSBCFG_FORCEHOSTMODE           BIT(29)
#define GUSBCFG_TXENDDELAY              BIT(28)
#define GUSBCFG_ICTRAFFICPULLREMOVE     BIT(27)
#define GUSBCFG_ICUSBCAP                BIT(26)
#define GUSBCFG_ULPI_INT_PROT_DIS       BIT(25)
#define GUSBCFG_INDICATORPASSTHROUGH    BIT(24)
#define GUSBCFG_INDICATORCOMPLEMENT     BIT(23)
#define GUSBCFG_TERMSELDLPULSE          BIT(22)
#define GUSBCFG_ULPI_INT_VBUS_IND       BIT(21)
#define GUSBCFG_ULPI_EXT_VBUS_DRV       BIT(20)
#define GUSBCFG_ULPI_CLK_SUSP_M         BIT(19)
#define GUSBCFG_ULPI_AUTO_RES           BIT(18)
#define GUSBCFG_ULPI_FS_LS              BIT(17)
#define GUSBCFG_OTG_UTMI_FS_SEL         BIT(16)
#define GUSBCFG_PHY_LP_CLK_SEL          BIT(15)
#define GUSBCFG_USBTRDTIM_MASK          (0xf << 10)
#define GUSBCFG_USBTRDTIM_SHIFT         10
#define GUSBCFG_HNPCAP                  BIT(9)
#define GUSBCFG_SRPCAP                  BIT(8)
#define GUSBCFG_DDRSEL                  BIT(7)
#define GUSBCFG_PHYSEL                  BIT(6)
#define GUSBCFG_FSINTF                  BIT(5)
#define GUSBCFG_ULPI_UTMI_SEL           BIT(4)
#define GUSBCFG_PHYIF16                 BIT(3)
#define GUSBCFG_PHYIF8                  (0 << 3)
#define GUSBCFG_TOUTCAL_MASK            (0x7 << 0)
#define GUSBCFG_TOUTCAL_SHIFT           0
#define GUSBCFG_TOUTCAL_LIMIT           0x7
#define GUSBCFG_TOUTCAL(_x)             ((_x) << 0)

#define GRSTCTL                         HSOTG_REG(0x010)
#define GRSTCTL_AHBIDLE                 BIT(31)
#define GRSTCTL_DMAREQ                  BIT(30)
#define GRSTCTL_TXFNUM_MASK             (0x1f << 6)
#define GRSTCTL_TXFNUM_SHIFT            6
#define GRSTCTL_TXFNUM_LIMIT            0x1f
#define GRSTCTL_TXFNUM(_x)              ((_x) << 6)
#define GRSTCTL_TXFFLSH                 BIT(5)
#define GRSTCTL_RXFFLSH                 BIT(4)
#define GRSTCTL_IN_TKNQ_FLSH            BIT(3)
#define GRSTCTL_FRMCNTRRST              BIT(2)
#define GRSTCTL_HSFTRST                 BIT(1)
#define GRSTCTL_CSFTRST                 BIT(0)

#define GINTSTS                         HSOTG_REG(0x014)
#define GINTMSK                         HSOTG_REG(0x018)
#define GINTSTS_WKUPINT                 BIT(31)
#define GINTSTS_SESSREQINT              BIT(30)
#define GINTSTS_DISCONNINT              BIT(29)
#define GINTSTS_CONIDSTSCHNG            BIT(28)
#define GINTSTS_LPMTRANRCVD             BIT(27)
#define GINTSTS_PTXFEMP                 BIT(26)
#define GINTSTS_HCHINT                  BIT(25)
#define GINTSTS_PRTINT                  BIT(24)
#define GINTSTS_RESETDET                BIT(23)
#define GINTSTS_FET_SUSP                BIT(22)
#define GINTSTS_INCOMPL_IP              BIT(21)
#define GINTSTS_INCOMPL_SOOUT           BIT(21)
#define GINTSTS_INCOMPL_SOIN            BIT(20)
#define GINTSTS_OEPINT                  BIT(19)
#define GINTSTS_IEPINT                  BIT(18)
#define GINTSTS_EPMIS                   BIT(17)
#define GINTSTS_RESTOREDONE             BIT(16)
#define GINTSTS_EOPF                    BIT(15)
#define GINTSTS_ISOUTDROP               BIT(14)
#define GINTSTS_ENUMDONE                BIT(13)
#define GINTSTS_USBRST                  BIT(12)
#define GINTSTS_USBSUSP                 BIT(11)
#define GINTSTS_ERLYSUSP                BIT(10)
#define GINTSTS_I2CINT                  BIT(9)
#define GINTSTS_ULPI_CK_INT             BIT(8)
#define GINTSTS_GOUTNAKEFF              BIT(7)
#define GINTSTS_GINNAKEFF               BIT(6)
#define GINTSTS_NPTXFEMP                BIT(5)
#define GINTSTS_RXFLVL                  BIT(4)
#define GINTSTS_SOF                     BIT(3)
#define GINTSTS_OTGINT                  BIT(2)
#define GINTSTS_MODEMIS                 BIT(1)
#define GINTSTS_CURMODE_HOST            BIT(0)

#define GRXSTSR                         HSOTG_REG(0x01C)
#define GRXSTSP                         HSOTG_REG(0x020)
#define GRXSTS_FN_MASK                  (0x7f << 25)
#define GRXSTS_FN_SHIFT                 25
#define GRXSTS_PKTSTS_MASK              (0xf << 17)
#define GRXSTS_PKTSTS_SHIFT             17
#define GRXSTS_PKTSTS_GLOBALOUTNAK      1
#define GRXSTS_PKTSTS_OUTRX             2
#define GRXSTS_PKTSTS_HCHIN             2
#define GRXSTS_PKTSTS_OUTDONE           3
#define GRXSTS_PKTSTS_HCHIN_XFER_COMP   3
#define GRXSTS_PKTSTS_SETUPDONE         4
#define GRXSTS_PKTSTS_DATATOGGLEERR     5
#define GRXSTS_PKTSTS_SETUPRX           6
#define GRXSTS_PKTSTS_HCHHALTED         7
#define GRXSTS_HCHNUM_MASK              (0xf << 0)
#define GRXSTS_HCHNUM_SHIFT             0
#define GRXSTS_DPID_MASK                (0x3 << 15)
#define GRXSTS_DPID_SHIFT               15
#define GRXSTS_BYTECNT_MASK             (0x7ff << 4)
#define GRXSTS_BYTECNT_SHIFT            4
#define GRXSTS_EPNUM_MASK               (0xf << 0)
#define GRXSTS_EPNUM_SHIFT              0

#define GRXFSIZ                         HSOTG_REG(0x024)
#define GRXFSIZ_DEPTH_MASK              (0xffff << 0)
#define GRXFSIZ_DEPTH_SHIFT             0

#define GNPTXFSIZ                       HSOTG_REG(0x028)
/* Use FIFOSIZE_* constants to access this register */

#define GNPTXSTS                        HSOTG_REG(0x02C)
#define GNPTXSTS_NP_TXQ_TOP_MASK                (0x7f << 24)
#define GNPTXSTS_NP_TXQ_TOP_SHIFT               24
#define GNPTXSTS_NP_TXQ_SPC_AVAIL_MASK          (0xff << 16)
#define GNPTXSTS_NP_TXQ_SPC_AVAIL_SHIFT         16
#define GNPTXSTS_NP_TXQ_SPC_AVAIL_GET(_v)       (((_v) >> 16) & 0xff)
#define GNPTXSTS_NP_TXF_SPC_AVAIL_MASK          (0xffff << 0)
#define GNPTXSTS_NP_TXF_SPC_AVAIL_SHIFT         0
#define GNPTXSTS_NP_TXF_SPC_AVAIL_GET(_v)       (((_v) >> 0) & 0xffff)

#define GI2CCTL                         HSOTG_REG(0x0030)
#define GI2CCTL_BSYDNE                  BIT(31)
#define GI2CCTL_RW                      BIT(30)
#define GI2CCTL_I2CDATSE0               BIT(28)
#define GI2CCTL_I2CDEVADDR_MASK         (0x3 << 26)
#define GI2CCTL_I2CDEVADDR_SHIFT        26
#define GI2CCTL_I2CSUSPCTL              BIT(25)
#define GI2CCTL_ACK                     BIT(24)
#define GI2CCTL_I2CEN                   BIT(23)
#define GI2CCTL_ADDR_MASK               (0x7f << 16)
#define GI2CCTL_ADDR_SHIFT              16
#define GI2CCTL_REGADDR_MASK            (0xff << 8)
#define GI2CCTL_REGADDR_SHIFT           8
#define GI2CCTL_RWDATA_MASK             (0xff << 0)
#define GI2CCTL_RWDATA_SHIFT            0

#define GPVNDCTL                        HSOTG_REG(0x0034)
#define GGPIO                           HSOTG_REG(0x0038)
#define GGPIO_STM32_OTG_GCCFG_PWRDWN    BIT(16)

#define GUID                            HSOTG_REG(0x003c)
#define GSNPSID                         HSOTG_REG(0x0040)
#define GHWCFG1                         HSOTG_REG(0x0044)
#define GSNPSID_ID_MASK                 GENMASK(31, 16)

#define GHWCFG2                         HSOTG_REG(0x0048)
#define GHWCFG2_OTG_ENABLE_IC_USB               BIT(31)
#define GHWCFG2_DEV_TOKEN_Q_DEPTH_MASK          (0x1f << 26)
#define GHWCFG2_DEV_TOKEN_Q_DEPTH_SHIFT         26
#define GHWCFG2_HOST_PERIO_TX_Q_DEPTH_MASK      (0x3 << 24)
#define GHWCFG2_HOST_PERIO_TX_Q_DEPTH_SHIFT     24
#define GHWCFG2_NONPERIO_TX_Q_DEPTH_MASK        (0x3 << 22)
#define GHWCFG2_NONPERIO_TX_Q_DEPTH_SHIFT       22
#define GHWCFG2_MULTI_PROC_INT                  BIT(20)
#define GHWCFG2_DYNAMIC_FIFO                    BIT(19)
#define GHWCFG2_PERIO_EP_SUPPORTED              BIT(18)
#define GHWCFG2_NUM_HOST_CHAN_MASK              (0xf << 14)
#define GHWCFG2_NUM_HOST_CHAN_SHIFT             14
#define GHWCFG2_NUM_DEV_EP_MASK                 (0xf << 10)
#define GHWCFG2_NUM_DEV_EP_SHIFT                10
#define GHWCFG2_FS_PHY_TYPE_MASK                (0x3 << 8)
#define GHWCFG2_FS_PHY_TYPE_SHIFT               8
#define GHWCFG2_FS_PHY_TYPE_NOT_SUPPORTED       0
#define GHWCFG2_FS_PHY_TYPE_DEDICATED           1
#define GHWCFG2_FS_PHY_TYPE_SHARED_UTMI         2
#define GHWCFG2_FS_PHY_TYPE_SHARED_ULPI         3
#define GHWCFG2_HS_PHY_TYPE_MASK                (0x3 << 6)
#define GHWCFG2_HS_PHY_TYPE_SHIFT               6
#define GHWCFG2_HS_PHY_TYPE_NOT_SUPPORTED       0
#define GHWCFG2_HS_PHY_TYPE_UTMI                1
#define GHWCFG2_HS_PHY_TYPE_ULPI                2
#define GHWCFG2_HS_PHY_TYPE_UTMI_ULPI           3
#define GHWCFG2_POINT2POINT                     BIT(5)
#define GHWCFG2_ARCHITECTURE_MASK               (0x3 << 3)
#define GHWCFG2_ARCHITECTURE_SHIFT              3
#define GHWCFG2_SLAVE_ONLY_ARCH                 0
#define GHWCFG2_EXT_DMA_ARCH                    1
#define GHWCFG2_INT_DMA_ARCH                    2
#define GHWCFG2_OP_MODE_MASK                    (0x7 << 0)
#define GHWCFG2_OP_MODE_SHIFT                   0
#define GHWCFG2_OP_MODE_HNP_SRP_CAPABLE         0
#define GHWCFG2_OP_MODE_SRP_ONLY_CAPABLE        1
#define GHWCFG2_OP_MODE_NO_HNP_SRP_CAPABLE      2
#define GHWCFG2_OP_MODE_SRP_CAPABLE_DEVICE      3
#define GHWCFG2_OP_MODE_NO_SRP_CAPABLE_DEVICE   4
#define GHWCFG2_OP_MODE_SRP_CAPABLE_HOST        5
#define GHWCFG2_OP_MODE_NO_SRP_CAPABLE_HOST     6
#define GHWCFG2_OP_MODE_UNDEFINED               7

#define GHWCFG3                         HSOTG_REG(0x004c)
#define GHWCFG3_DFIFO_DEPTH_MASK                (0xffff << 16)
#define GHWCFG3_DFIFO_DEPTH_SHIFT               16
#define GHWCFG3_OTG_LPM_EN                      BIT(15)
#define GHWCFG3_BC_SUPPORT                      BIT(14)
#define GHWCFG3_OTG_ENABLE_HSIC                 BIT(13)
#define GHWCFG3_ADP_SUPP                        BIT(12)
#define GHWCFG3_SYNCH_RESET_TYPE                BIT(11)
#define GHWCFG3_OPTIONAL_FEATURES               BIT(10)
#define GHWCFG3_VENDOR_CTRL_IF                  BIT(9)
#define GHWCFG3_I2C                             BIT(8)
#define GHWCFG3_OTG_FUNC                        BIT(7)
#define GHWCFG3_PACKET_SIZE_CNTR_WIDTH_MASK     (0x7 << 4)
#define GHWCFG3_PACKET_SIZE_CNTR_WIDTH_SHIFT    4
#define GHWCFG3_XFER_SIZE_CNTR_WIDTH_MASK       (0xf << 0)
#define GHWCFG3_XFER_SIZE_CNTR_WIDTH_SHIFT      0

#define GHWCFG4                         HSOTG_REG(0x0050)
#define GHWCFG4_DESC_DMA_DYN                    BIT(31)
#define GHWCFG4_DESC_DMA                        BIT(30)
#define GHWCFG4_NUM_IN_EPS_MASK                 (0xf << 26)
#define GHWCFG4_NUM_IN_EPS_SHIFT                26
#define GHWCFG4_DED_FIFO_EN                     BIT(25)
#define GHWCFG4_DED_FIFO_SHIFT          25
#define GHWCFG4_SESSION_END_FILT_EN             BIT(24)
#define GHWCFG4_B_VALID_FILT_EN                 BIT(23)
#define GHWCFG4_A_VALID_FILT_EN                 BIT(22)
#define GHWCFG4_VBUS_VALID_FILT_EN              BIT(21)
#define GHWCFG4_IDDIG_FILT_EN                   BIT(20)
#define GHWCFG4_NUM_DEV_MODE_CTRL_EP_MASK       (0xf << 16)
#define GHWCFG4_NUM_DEV_MODE_CTRL_EP_SHIFT      16
#define GHWCFG4_UTMI_PHY_DATA_WIDTH_MASK        (0x3 << 14)
#define GHWCFG4_UTMI_PHY_DATA_WIDTH_SHIFT       14
#define GHWCFG4_UTMI_PHY_DATA_WIDTH_8           0
#define GHWCFG4_UTMI_PHY_DATA_WIDTH_16          1
#define GHWCFG4_UTMI_PHY_DATA_WIDTH_8_OR_16     2
#define GHWCFG4_ACG_SUPPORTED                   BIT(12)
#define GHWCFG4_IPG_ISOC_SUPPORTED              BIT(11)
#define GHWCFG4_SERVICE_INTERVAL_SUPPORTED      BIT(10)
#define GHWCFG4_XHIBER                          BIT(7)
#define GHWCFG4_HIBER                           BIT(6)
#define GHWCFG4_MIN_AHB_FREQ                    BIT(5)
#define GHWCFG4_POWER_OPTIMIZ                   BIT(4)
#define GHWCFG4_NUM_DEV_PERIO_IN_EP_MASK        (0xf << 0)
#define GHWCFG4_NUM_DEV_PERIO_IN_EP_SHIFT       0

#define GLPMCFG                         HSOTG_REG(0x0054)
#define GLPMCFG_INVSELHSIC              BIT(31)
#define GLPMCFG_HSICCON                 BIT(30)
#define GLPMCFG_RSTRSLPSTS              BIT(29)
#define GLPMCFG_ENBESL                  BIT(28)
#define GLPMCFG_LPM_RETRYCNT_STS_MASK   (0x7 << 25)
#define GLPMCFG_LPM_RETRYCNT_STS_SHIFT  25
#define GLPMCFG_SNDLPM                  BIT(24)
#define GLPMCFG_RETRY_CNT_MASK          (0x7 << 21)
#define GLPMCFG_RETRY_CNT_SHIFT         21
#define GLPMCFG_LPM_REJECT_CTRL_CONTROL BIT(21)
#define GLPMCFG_LPM_ACCEPT_CTRL_ISOC    BIT(22)
#define GLPMCFG_LPM_CHNL_INDX_MASK      (0xf << 17)
#define GLPMCFG_LPM_CHNL_INDX_SHIFT     17
#define GLPMCFG_L1RESUMEOK              BIT(16)
#define GLPMCFG_SLPSTS                  BIT(15)
#define GLPMCFG_COREL1RES_MASK          (0x3 << 13)
#define GLPMCFG_COREL1RES_SHIFT         13
#define GLPMCFG_HIRD_THRES_MASK         (0x1f << 8)
#define GLPMCFG_HIRD_THRES_SHIFT        8
#define GLPMCFG_HIRD_THRES_EN           (0x10 << 8)
#define GLPMCFG_ENBLSLPM                BIT(7)
#define GLPMCFG_BREMOTEWAKE             BIT(6)
#define GLPMCFG_HIRD_MASK               (0xf << 2)
#define GLPMCFG_HIRD_SHIFT              2
#define GLPMCFG_APPL1RES                BIT(1)
#define GLPMCFG_LPMCAP                  BIT(0)

#define GPWRDN                          HSOTG_REG(0x0058)
#define GPWRDN_MULT_VAL_ID_BC_MASK      (0x1f << 24)
#define GPWRDN_MULT_VAL_ID_BC_SHIFT     24
#define GPWRDN_ADP_INT                  BIT(23)
#define GPWRDN_BSESSVLD                 BIT(22)
#define GPWRDN_IDSTS                    BIT(21)
#define GPWRDN_LINESTATE_MASK           (0x3 << 19)
#define GPWRDN_LINESTATE_SHIFT          19
#define GPWRDN_STS_CHGINT_MSK           BIT(18)
#define GPWRDN_STS_CHGINT               BIT(17)
#define GPWRDN_SRP_DET_MSK              BIT(16)
#define GPWRDN_SRP_DET                  BIT(15)
#define GPWRDN_CONNECT_DET_MSK          BIT(14)
#define GPWRDN_CONNECT_DET              BIT(13)
#define GPWRDN_DISCONN_DET_MSK          BIT(12)
#define GPWRDN_DISCONN_DET              BIT(11)
#define GPWRDN_RST_DET_MSK              BIT(10)
#define GPWRDN_RST_DET                  BIT(9)
#define GPWRDN_LNSTSCHG_MSK             BIT(8)
#define GPWRDN_LNSTSCHG                 BIT(7)
#define GPWRDN_DIS_VBUS                 BIT(6)
#define GPWRDN_PWRDNSWTCH               BIT(5)
#define GPWRDN_PWRDNRSTN                BIT(4)
#define GPWRDN_PWRDNCLMP                BIT(3)
#define GPWRDN_RESTORE                  BIT(2)
#define GPWRDN_PMUACTV                  BIT(1)
#define GPWRDN_PMUINTSEL                BIT(0)

#define GDFIFOCFG                       HSOTG_REG(0x005c)
#define GDFIFOCFG_EPINFOBASE_MASK       (0xffff << 16)
#define GDFIFOCFG_EPINFOBASE_SHIFT      16
#define GDFIFOCFG_GDFIFOCFG_MASK        (0xffff << 0)
#define GDFIFOCFG_GDFIFOCFG_SHIFT       0

#define ADPCTL                          HSOTG_REG(0x0060)
#define ADPCTL_AR_MASK                  (0x3 << 27)
#define ADPCTL_AR_SHIFT                 27
#define ADPCTL_ADP_TMOUT_INT_MSK        BIT(26)
#define ADPCTL_ADP_SNS_INT_MSK          BIT(25)
#define ADPCTL_ADP_PRB_INT_MSK          BIT(24)
#define ADPCTL_ADP_TMOUT_INT            BIT(23)
#define ADPCTL_ADP_SNS_INT              BIT(22)
#define ADPCTL_ADP_PRB_INT              BIT(21)
#define ADPCTL_ADPENA                   BIT(20)
#define ADPCTL_ADPRES                   BIT(19)
#define ADPCTL_ENASNS                   BIT(18)
#define ADPCTL_ENAPRB                   BIT(17)
#define ADPCTL_RTIM_MASK                (0x7ff << 6)
#define ADPCTL_RTIM_SHIFT               6
#define ADPCTL_PRB_PER_MASK             (0x3 << 4)
#define ADPCTL_PRB_PER_SHIFT            4
#define ADPCTL_PRB_DELTA_MASK           (0x3 << 2)
#define ADPCTL_PRB_DELTA_SHIFT          2
#define ADPCTL_PRB_DSCHRG_MASK          (0x3 << 0)
#define ADPCTL_PRB_DSCHRG_SHIFT         0

#define GREFCLK                             HSOTG_REG(0x0064)
#define GREFCLK_REFCLKPER_MASK              (0x1ffff << 15)
#define GREFCLK_REFCLKPER_SHIFT             15
#define GREFCLK_REF_CLK_MODE                BIT(14)
#define GREFCLK_SOF_CNT_WKUP_ALERT_MASK     (0x3ff)
#define GREFCLK_SOF_CNT_WKUP_ALERT_SHIFT    0

#define GINTMSK2                        HSOTG_REG(0x0068)
#define GINTMSK2_WKUP_ALERT_INT_MSK     BIT(0)

#define GINTSTS2                        HSOTG_REG(0x006c)
#define GINTSTS2_WKUP_ALERT_INT         BIT(0)

#define HPTXFSIZ                        HSOTG_REG(0x100)
/* Use FIFOSIZE_* constants to access this register */

#define DPTXFSIZN(_a)                   HSOTG_REG(0x104 + (((_a) - 1) * 4))
/* Use FIFOSIZE_* constants to access this register */

/* These apply to the GNPTXFSIZ, HPTXFSIZ and DPTXFSIZN registers */
#define FIFOSIZE_DEPTH_MASK             (0xffff << 16)
#define FIFOSIZE_DEPTH_SHIFT            16
#define FIFOSIZE_STARTADDR_MASK         (0xffff << 0)
#define FIFOSIZE_STARTADDR_SHIFT        0
#define FIFOSIZE_DEPTH_GET(_x)          (((_x) >> 16) & 0xffff)

/* Device mode registers */

#define DCFG                            HSOTG_REG(0x800)
#define DCFG_DESCDMA_EN                 BIT(23)
#define DCFG_EPMISCNT_MASK              (0x1f << 18)
#define DCFG_EPMISCNT_SHIFT             18
#define DCFG_EPMISCNT_LIMIT             0x1f
#define DCFG_EPMISCNT(_x)               ((_x) << 18)
#define DCFG_IPG_ISOC_SUPPORDED         BIT(17)
#define DCFG_PERFRINT_MASK              (0x3 << 11)
#define DCFG_PERFRINT_SHIFT             11
#define DCFG_PERFRINT_LIMIT             0x3
#define DCFG_PERFRINT(_x)               ((_x) << 11)
#define DCFG_DEVADDR_MASK               (0x7f << 4)
#define DCFG_DEVADDR_SHIFT              4
#define DCFG_DEVADDR_LIMIT              0x7f
#define DCFG_DEVADDR(_x)                ((_x) << 4)
#define DCFG_NZ_STS_OUT_HSHK            BIT(2)
#define DCFG_DEVSPD_MASK                (0x3 << 0)
#define DCFG_DEVSPD_SHIFT               0
#define DCFG_DEVSPD_HS                  0
#define DCFG_DEVSPD_FS                  1
#define DCFG_DEVSPD_LS                  2
#define DCFG_DEVSPD_FS48                3

#define DCTL                            HSOTG_REG(0x804)
#define DCTL_SERVICE_INTERVAL_SUPPORTED BIT(19)
#define DCTL_PWRONPRGDONE               BIT(11)
#define DCTL_CGOUTNAK                   BIT(10)
#define DCTL_SGOUTNAK                   BIT(9)
#define DCTL_CGNPINNAK                  BIT(8)
#define DCTL_SGNPINNAK                  BIT(7)
#define DCTL_TSTCTL_MASK                (0x7 << 4)
#define DCTL_TSTCTL_SHIFT               4
#define DCTL_GOUTNAKSTS                 BIT(3)
#define DCTL_GNPINNAKSTS                BIT(2)
#define DCTL_SFTDISCON                  BIT(1)
#define DCTL_RMTWKUPSIG                 BIT(0)

#define DSTS                            HSOTG_REG(0x808)
#define DSTS_SOFFN_MASK                 (0x3fff << 8)
#define DSTS_SOFFN_SHIFT                8
#define DSTS_SOFFN_LIMIT                0x3fff
#define DSTS_SOFFN(_x)                  ((_x) << 8)
#define DSTS_ERRATICERR                 BIT(3)
#define DSTS_ENUMSPD_MASK               (0x3 << 1)
#define DSTS_ENUMSPD_SHIFT              1
#define DSTS_ENUMSPD_HS                 0
#define DSTS_ENUMSPD_FS                 1
#define DSTS_ENUMSPD_LS                 2
#define DSTS_ENUMSPD_FS48               3
#define DSTS_SUSPSTS                    BIT(0)

#define DIEPMSK                         HSOTG_REG(0x810)
#define DIEPMSK_NAKMSK                  BIT(13)
#define DIEPMSK_BNAININTRMSK            BIT(9)
#define DIEPMSK_TXFIFOUNDRNMSK          BIT(8)
#define DIEPMSK_TXFIFOEMPTY             BIT(7)
#define DIEPMSK_INEPNAKEFFMSK           BIT(6)
#define DIEPMSK_INTKNEPMISMSK           BIT(5)
#define DIEPMSK_INTKNTXFEMPMSK          BIT(4)
#define DIEPMSK_TIMEOUTMSK              BIT(3)
#define DIEPMSK_AHBERRMSK               BIT(2)
#define DIEPMSK_EPDISBLDMSK             BIT(1)
#define DIEPMSK_XFERCOMPLMSK            BIT(0)

#define DOEPMSK                         HSOTG_REG(0x814)
#define DOEPMSK_BNAMSK                  BIT(9)
#define DOEPMSK_BACK2BACKSETUP          BIT(6)
#define DOEPMSK_STSPHSERCVDMSK          BIT(5)
#define DOEPMSK_OUTTKNEPDISMSK          BIT(4)
#define DOEPMSK_SETUPMSK                BIT(3)
#define DOEPMSK_AHBERRMSK               BIT(2)
#define DOEPMSK_EPDISBLDMSK             BIT(1)
#define DOEPMSK_XFERCOMPLMSK            BIT(0)

#define DAINT                           HSOTG_REG(0x818)
#define DAINTMSK                        HSOTG_REG(0x81C)
#define DAINT_OUTEP_SHIFT               16
#define DAINT_OUTEP(_x)                 (1 << ((_x) + 16))
#define DAINT_INEP(_x)                  (1 << (_x))

#define DTKNQR1                         HSOTG_REG(0x820)
#define DTKNQR2                         HSOTG_REG(0x824)
#define DTKNQR3                         HSOTG_REG(0x830)
#define DTKNQR4                         HSOTG_REG(0x834)
#define DIEPEMPMSK                      HSOTG_REG(0x834)

#define DVBUSDIS                        HSOTG_REG(0x828)
#define DVBUSPULSE                      HSOTG_REG(0x82C)

#define DIEPCTL0                        HSOTG_REG(0x900)
#define DIEPCTL(_a)                     HSOTG_REG(0x900 + ((_a) * 0x20))

#define DOEPCTL0                        HSOTG_REG(0xB00)
#define DOEPCTL(_a)                     HSOTG_REG(0xB00 + ((_a) * 0x20))

/* EP0 specialness:
 * bits[29..28] - reserved (no SetD0PID, SetD1PID)
 * bits[25..22] - should always be zero, this isn't a periodic endpoint
 * bits[10..0]  - MPS setting different for EP0
 */
#define D0EPCTL_MPS_MASK                (0x3 << 0)
#define D0EPCTL_MPS_SHIFT               0
#define D0EPCTL_MPS_64                  0
#define D0EPCTL_MPS_32                  1
#define D0EPCTL_MPS_16                  2
#define D0EPCTL_MPS_8                   3

#define DXEPCTL_EPENA                   BIT(31)
#define DXEPCTL_EPDIS                   BIT(30)
#define DXEPCTL_SETD1PID                BIT(29)
#define DXEPCTL_SETODDFR                BIT(29)
#define DXEPCTL_SETD0PID                BIT(28)
#define DXEPCTL_SETEVENFR               BIT(28)
#define DXEPCTL_SNAK                    BIT(27)
#define DXEPCTL_CNAK                    BIT(26)
#define DXEPCTL_TXFNUM_MASK             (0xf << 22)
#define DXEPCTL_TXFNUM_SHIFT            22
#define DXEPCTL_TXFNUM_LIMIT            0xf
#define DXEPCTL_TXFNUM(_x)              ((_x) << 22)
#define DXEPCTL_TXFNUM_GET(_v)          (((_v) >> 22) & 0xf)
#define DXEPCTL_STALL                   BIT(21)
#define DXEPCTL_SNP                     BIT(20)
#define DXEPCTL_EPTYPE_MASK             (0x3 << 18)
#define DXEPCTL_EPTYPE_CONTROL          (0x0 << 18)
#define DXEPCTL_EPTYPE_ISO              (0x1 << 18)
#define DXEPCTL_EPTYPE_BULK             (0x2 << 18)
#define DXEPCTL_EPTYPE_INTERRUPT        (0x3 << 18)
#define DXEPCTL_EPTYPE_SHIFT            18

#define DXEPCTL_NAKSTS                  BIT(17)
#define DXEPCTL_DPID                    BIT(16)
#define DXEPCTL_EOFRNUM                 BIT(16)
#define DXEPCTL_USBACTEP                BIT(15)
#define DXEPCTL_NEXTEP_MASK             (0xf << 11)
#define DXEPCTL_NEXTEP_SHIFT            11
#define DXEPCTL_NEXTEP_LIMIT            0xf
#define DXEPCTL_NEXTEP(_x)              ((_x) << 11)
#define DXEPCTL_MPS_MASK                (0x7ff << 0)
#define DXEPCTL_MPS_SHIFT               0
#define DXEPCTL_MPS_LIMIT               0x7ff
#define DXEPCTL_MPS_GET(_v)             (((_v) >> 0) & 0x7ff)
#define DXEPCTL_MPS(_x)                 ((_x) << 0)

#define DIEPINT(_a)                     HSOTG_REG(0x908 + ((_a) * 0x20))
#define DOEPINT(_a)                     HSOTG_REG(0xB08 + ((_a) * 0x20))
#define DXEPINT_SETUP_RCVD              BIT(15)
#define DXEPINT_NYETINTRPT              BIT(14)
#define DXEPINT_NAKINTRPT               BIT(13)
#define DXEPINT_BBLEERRINTRPT           BIT(12)
#define DXEPINT_PKTDRPSTS               BIT(11)
#define DXEPINT_BNAINTR                 BIT(9)
#define DXEPINT_TXFIFOUNDRN             BIT(8)
#define DXEPINT_OUTPKTERR               BIT(8)
#define DXEPINT_TXFEMP                  BIT(7)
#define DXEPINT_INEPNAKEFF              BIT(6)
#define DXEPINT_BACK2BACKSETUP          BIT(6)
#define DXEPINT_INTKNEPMIS              BIT(5)
#define DXEPINT_STSPHSERCVD             BIT(5)
#define DXEPINT_INTKNTXFEMP             BIT(4)
#define DXEPINT_OUTTKNEPDIS             BIT(4)
#define DXEPINT_TIMEOUT                 BIT(3)
#define DXEPINT_SETUP                   BIT(3)
#define DXEPINT_AHBERR                  BIT(2)
#define DXEPINT_EPDISBLD                BIT(1)
#define DXEPINT_XFERCOMPL               BIT(0)

#define DIEPTSIZ0                       HSOTG_REG(0x910)
#define DIEPTSIZ0_PKTCNT_MASK           (0x3 << 19)
#define DIEPTSIZ0_PKTCNT_SHIFT          19
#define DIEPTSIZ0_PKTCNT_LIMIT          0x3
#define DIEPTSIZ0_PKTCNT(_x)            ((_x) << 19)
#define DIEPTSIZ0_PKTCNT_GET(_v)        (((_v) >> 19) & 0x3)
#define DIEPTSIZ0_XFERSIZE_MASK         (0x7f << 0)
#define DIEPTSIZ0_XFERSIZE_SHIFT        0
#define DIEPTSIZ0_XFERSIZE_LIMIT        0x7f
#define DIEPTSIZ0_XFERSIZE(_x)          ((_x) << 0)
#define DIEPTSIZ0_XFERSIZE_GET(_v)      (((_v) >> 0) & 0x7f)

#define DOEPTSIZ0                       HSOTG_REG(0xB10)
#define DOEPTSIZ0_SUPCNT_MASK           (0x3 << 29)
#define DOEPTSIZ0_SUPCNT_SHIFT          29
#define DOEPTSIZ0_SUPCNT_LIMIT          0x3
#define DOEPTSIZ0_SUPCNT(_x)            ((_x) << 29)
#define DOEPTSIZ0_PKTCNT(_x)            (((_x) & 0x1) << 19)
#define DOEPTSIZ0_PKTCNT_MASK           BIT(19)
#define DOEPTSIZ0_PKTCNT_GET(_v)        (((_v) >> 19) & 1)
#define DOEPTSIZ0_XFERSIZE(_x)          (((_x) & 0x7f) << 0)
#define DOEPTSIZ0_XFERSIZE_MASK         (0x7f << 0)
#define DOEPTSIZ0_XFERSIZE_SHIFT        0
#define DOEPTSIZ0_XFERSIZE_GET(_v)      (((_v) >> 0) & 0x7f)

#define DIEPTSIZ(_a)                    HSOTG_REG(0x910 + ((_a) * 0x20))
#define DOEPTSIZ(_a)                    HSOTG_REG(0xB10 + ((_a) * 0x20))
#define DXEPTSIZ_MC_MASK                (0x3 << 29)
#define DXEPTSIZ_MC_SHIFT               29
#define DXEPTSIZ_MC_LIMIT               0x3
#define DXEPTSIZ_MC(_x)                 ((_x) << 29)
#define DXEPTSIZ_PKTCNT_MASK            (0x3ff << 19)
#define DXEPTSIZ_PKTCNT_SHIFT           19
#define DXEPTSIZ_PKTCNT_LIMIT           0x3ff
#define DXEPTSIZ_PKTCNT_GET(_v)         (((_v) >> 19) & 0x3ff)
#define DXEPTSIZ_PKTCNT(_x)             ((_x) << 19)
#define DXEPTSIZ_XFERSIZE_MASK          (0x7ffff << 0)
#define DXEPTSIZ_XFERSIZE_SHIFT         0
#define DXEPTSIZ_XFERSIZE_LIMIT         0x7ffff
#define DXEPTSIZ_XFERSIZE_GET(_v)       (((_v) >> 0) & 0x7ffff)
#define DXEPTSIZ_XFERSIZE(_x)           ((_x) << 0)

#define DIEPDMA(_a)                     HSOTG_REG(0x914 + ((_a) * 0x20))
#define DOEPDMA(_a)                     HSOTG_REG(0xB14 + ((_a) * 0x20))

#define DTXFSTS(_a)                     HSOTG_REG(0x918 + ((_a) * 0x20))

#define PCGCTL                          HSOTG_REG(0x0e00)
#define PCGCTL_IF_DEV_MODE              BIT(31)
#define PCGCTL_P2HD_PRT_SPD_MASK        (0x3 << 29)
#define PCGCTL_P2HD_PRT_SPD_SHIFT       29
#define PCGCTL_P2HD_DEV_ENUM_SPD_MASK   (0x3 << 27)
#define PCGCTL_P2HD_DEV_ENUM_SPD_SHIFT  27
#define PCGCTL_MAC_DEV_ADDR_MASK        (0x7f << 20)
#define PCGCTL_MAC_DEV_ADDR_SHIFT       20
#define PCGCTL_MAX_TERMSEL              BIT(19)
#define PCGCTL_MAX_XCVRSELECT_MASK      (0x3 << 17)
#define PCGCTL_MAX_XCVRSELECT_SHIFT     17
#define PCGCTL_PORT_POWER               BIT(16)
#define PCGCTL_PRT_CLK_SEL_MASK         (0x3 << 14)
#define PCGCTL_PRT_CLK_SEL_SHIFT        14
#define PCGCTL_ESS_REG_RESTORED         BIT(13)
#define PCGCTL_EXTND_HIBER_SWITCH       BIT(12)
#define PCGCTL_EXTND_HIBER_PWRCLMP      BIT(11)
#define PCGCTL_ENBL_EXTND_HIBER         BIT(10)
#define PCGCTL_RESTOREMODE              BIT(9)
#define PCGCTL_RESETAFTSUSP             BIT(8)
#define PCGCTL_DEEP_SLEEP               BIT(7)
#define PCGCTL_PHY_IN_SLEEP             BIT(6)
#define PCGCTL_ENBL_SLEEP_GATING        BIT(5)
#define PCGCTL_RSTPDWNMODULE            BIT(3)
#define PCGCTL_PWRCLMP                  BIT(2)
#define PCGCTL_GATEHCLK                 BIT(1)
#define PCGCTL_STOPPCLK                 BIT(0)

#define PCGCCTL1                        HSOTG_REG(0xe04)
#define PCGCCTL1_TIMER                  (0x3 << 1)
#define PCGCCTL1_GATEEN                 BIT(0)

#define EPFIFO(_a)                      HSOTG_REG(0x1000 + ((_a) * 0x1000))

/* Host Mode Registers */

#define HCFG                            HSOTG_REG(0x0400)
#define HCFG_MODECHTIMEN                BIT(31)
#define HCFG_PERSCHEDENA                BIT(26)
#define HCFG_FRLISTEN_MASK              (0x3 << 24)
#define HCFG_FRLISTEN_SHIFT             24
#define HCFG_FRLISTEN_8                         (0 << 24)
#define FRLISTEN_8_SIZE                         8
#define HCFG_FRLISTEN_16                        BIT(24)
#define FRLISTEN_16_SIZE                        16
#define HCFG_FRLISTEN_32                        (2 << 24)
#define FRLISTEN_32_SIZE                        32
#define HCFG_FRLISTEN_64                        (3 << 24)
#define FRLISTEN_64_SIZE                        64
#define HCFG_DESCDMA                    BIT(23)
#define HCFG_RESVALID_MASK              (0xff << 8)
#define HCFG_RESVALID_SHIFT             8
#define HCFG_ENA32KHZ                   BIT(7)
#define HCFG_FSLSSUPP                   BIT(2)
#define HCFG_FSLSPCLKSEL_MASK           (0x3 << 0)
#define HCFG_FSLSPCLKSEL_SHIFT          0
#define HCFG_FSLSPCLKSEL_30_60_MHZ      0
#define HCFG_FSLSPCLKSEL_48_MHZ         1
#define HCFG_FSLSPCLKSEL_6_MHZ          2

#define HFIR                            HSOTG_REG(0x0404)
#define HFIR_FRINT_MASK                 (0xffff << 0)
#define HFIR_FRINT_SHIFT                0
#define HFIR_RLDCTRL                    BIT(16)

#define HFNUM                           HSOTG_REG(0x0408)
#define HFNUM_FRREM_MASK                (0xffff << 16)
#define HFNUM_FRREM_SHIFT               16
#define HFNUM_FRNUM_MASK                (0xffff << 0)
#define HFNUM_FRNUM_SHIFT               0
#define HFNUM_MAX_FRNUM                 0x3fff

#define HPTXSTS                         HSOTG_REG(0x0410)
#define TXSTS_QTOP_ODD                  BIT(31)
#define TXSTS_QTOP_CHNEP_MASK           (0xf << 27)
#define TXSTS_QTOP_CHNEP_SHIFT          27
#define TXSTS_QTOP_TOKEN_MASK           (0x3 << 25)
#define TXSTS_QTOP_TOKEN_SHIFT          25
#define TXSTS_QTOP_TERMINATE            BIT(24)
#define TXSTS_QSPCAVAIL_MASK            (0xff << 16)
#define TXSTS_QSPCAVAIL_SHIFT           16
#define TXSTS_FSPCAVAIL_MASK            (0xffff << 0)
#define TXSTS_FSPCAVAIL_SHIFT           0

#define HAINT                           HSOTG_REG(0x0414)
#define HAINTMSK                        HSOTG_REG(0x0418)
#define HFLBADDR                        HSOTG_REG(0x041c)

#define HPRT0                           HSOTG_REG(0x0440)
#define HPRT0_SPD_MASK                  (0x3 << 17)
#define HPRT0_SPD_SHIFT                 17
#define HPRT0_SPD_HIGH_SPEED            0
#define HPRT0_SPD_FULL_SPEED            1
#define HPRT0_SPD_LOW_SPEED             2
#define HPRT0_TSTCTL_MASK               (0xf << 13)
#define HPRT0_TSTCTL_SHIFT              13
#define HPRT0_PWR                       BIT(12)
#define HPRT0_LNSTS_MASK                (0x3 << 10)
#define HPRT0_LNSTS_SHIFT               10
#define HPRT0_RST                       BIT(8)
#define HPRT0_SUSP                      BIT(7)
#define HPRT0_RES                       BIT(6)
#define HPRT0_OVRCURRCHG                BIT(5)
#define HPRT0_OVRCURRACT                BIT(4)
#define HPRT0_ENACHG                    BIT(3)
#define HPRT0_ENA                       BIT(2)
#define HPRT0_CONNDET                   BIT(1)
#define HPRT0_CONNSTS                   BIT(0)

#define HCCHAR(_ch)                     HSOTG_REG(0x0500 + 0x20 * (_ch))
#define HCCHAR_CHENA                    BIT(31)
#define HCCHAR_CHDIS                    BIT(30)
#define HCCHAR_ODDFRM                   BIT(29)
#define HCCHAR_DEVADDR_MASK             (0x7f << 22)
#define HCCHAR_DEVADDR_SHIFT            22
#define HCCHAR_MULTICNT_MASK            (0x3 << 20)
#define HCCHAR_MULTICNT_SHIFT           20
#define HCCHAR_EPTYPE_MASK              (0x3 << 18)
#define HCCHAR_EPTYPE_SHIFT             18
#define HCCHAR_LSPDDEV                  BIT(17)
#define HCCHAR_EPDIR                    BIT(15)
#define HCCHAR_EPNUM_MASK               (0xf << 11)
#define HCCHAR_EPNUM_SHIFT              11
#define HCCHAR_MPS_MASK                 (0x7ff << 0)
#define HCCHAR_MPS_SHIFT                0

#define HCSPLT(_ch)                     HSOTG_REG(0x0504 + 0x20 * (_ch))
#define HCSPLT_SPLTENA                  BIT(31)
#define HCSPLT_COMPSPLT                 BIT(16)
#define HCSPLT_XACTPOS_MASK             (0x3 << 14)
#define HCSPLT_XACTPOS_SHIFT            14
#define HCSPLT_XACTPOS_MID              0
#define HCSPLT_XACTPOS_END              1
#define HCSPLT_XACTPOS_BEGIN            2
#define HCSPLT_XACTPOS_ALL              3
#define HCSPLT_HUBADDR_MASK             (0x7f << 7)
#define HCSPLT_HUBADDR_SHIFT            7
#define HCSPLT_PRTADDR_MASK             (0x7f << 0)
#define HCSPLT_PRTADDR_SHIFT            0

#define HCINT(_ch)                      HSOTG_REG(0x0508 + 0x20 * (_ch))
#define HCINTMSK(_ch)                   HSOTG_REG(0x050c + 0x20 * (_ch))
#define HCINTMSK_RESERVED14_31          (0x3ffff << 14)
#define HCINTMSK_FRM_LIST_ROLL          BIT(13)
#define HCINTMSK_XCS_XACT               BIT(12)
#define HCINTMSK_BNA                    BIT(11)
#define HCINTMSK_DATATGLERR             BIT(10)
#define HCINTMSK_FRMOVRUN               BIT(9)
#define HCINTMSK_BBLERR                 BIT(8)
#define HCINTMSK_XACTERR                BIT(7)
#define HCINTMSK_NYET                   BIT(6)
#define HCINTMSK_ACK                    BIT(5)
#define HCINTMSK_NAK                    BIT(4)
#define HCINTMSK_STALL                  BIT(3)
#define HCINTMSK_AHBERR                 BIT(2)
#define HCINTMSK_CHHLTD                 BIT(1)
#define HCINTMSK_XFERCOMPL              BIT(0)

#define HCTSIZ(_ch)                     HSOTG_REG(0x0510 + 0x20 * (_ch))
#define TSIZ_DOPNG                      BIT(31)
#define TSIZ_SC_MC_PID_MASK             (0x3 << 29)
#define TSIZ_SC_MC_PID_SHIFT            29
#define TSIZ_SC_MC_PID_DATA0            0
#define TSIZ_SC_MC_PID_DATA2            1
#define TSIZ_SC_MC_PID_DATA1            2
#define TSIZ_SC_MC_PID_MDATA            3
#define TSIZ_SC_MC_PID_SETUP            3
#define TSIZ_PKTCNT_MASK                (0x3ff << 19)
#define TSIZ_PKTCNT_SHIFT               19
#define TSIZ_NTD_MASK                   (0xff << 8)
#define TSIZ_NTD_SHIFT                  8
#define TSIZ_SCHINFO_MASK               (0xff << 0)
#define TSIZ_SCHINFO_SHIFT              0
#define TSIZ_XFERSIZE_MASK              (0x7ffff << 0)
#define TSIZ_XFERSIZE_SHIFT             0

#define HCDMA(_ch)                      HSOTG_REG(0x0514 + 0x20 * (_ch))

#define HCDMAB(_ch)                     HSOTG_REG(0x051c + 0x20 * (_ch))

#define HCFIFO(_ch)                     HSOTG_REG(0x1000 + 0x1000 * (_ch))

/**
 * struct dwc2_dma_desc - DMA descriptor structure,
 * used for both host and gadget modes
 *
 * @status: DMA descriptor status quadlet
 * @buf:    DMA descriptor data buffer pointer
 *
 * DMA Descriptor structure contains two quadlets:
 * Status quadlet and Data buffer pointer.
 */
struct dwc2_dma_desc {
        uint32_t status;
        uint32_t buf;
} QEMU_PACKED;

/* Host Mode DMA descriptor status quadlet */

#define HOST_DMA_A                      BIT(31)
#define HOST_DMA_STS_MASK               (0x3 << 28)
#define HOST_DMA_STS_SHIFT              28
#define HOST_DMA_STS_PKTERR             BIT(28)
#define HOST_DMA_EOL                    BIT(26)
#define HOST_DMA_IOC                    BIT(25)
#define HOST_DMA_SUP                    BIT(24)
#define HOST_DMA_ALT_QTD                BIT(23)
#define HOST_DMA_QTD_OFFSET_MASK        (0x3f << 17)
#define HOST_DMA_QTD_OFFSET_SHIFT       17
#define HOST_DMA_ISOC_NBYTES_MASK       (0xfff << 0)
#define HOST_DMA_ISOC_NBYTES_SHIFT      0
#define HOST_DMA_NBYTES_MASK            (0x1ffff << 0)
#define HOST_DMA_NBYTES_SHIFT           0
#define HOST_DMA_NBYTES_LIMIT           131071

/* Device Mode DMA descriptor status quadlet */

#define DEV_DMA_BUFF_STS_MASK           (0x3 << 30)
#define DEV_DMA_BUFF_STS_SHIFT          30
#define DEV_DMA_BUFF_STS_GET(_v)        (((_v) >> 30) & 0x3)
#define DEV_DMA_BUFF_STS_HREADY         0
#define DEV_DMA_BUFF_STS_DMABUSY        1
#define DEV_DMA_BUFF_STS_DMADONE        2
#define DEV_DMA_BUFF_STS_HBUSY          3
#define DEV_DMA_STS_MASK                (0x3 << 28)
#define DEV_DMA_STS_SHIFT               28
#define DEV_DMA_STS_SUCC                0
#define DEV_DMA_STS_BUFF_FLUSH          1
#define DEV_DMA_STS_BUFF_ERR            3
#define DEV_DMA_L                       BIT(27)
#define DEV_DMA_SHORT                   BIT(26)
#define DEV_DMA_IOC                     BIT(25)
#define DEV_DMA_SR                      BIT(24)
#define DEV_DMA_MTRF                    BIT(23)
#define DEV_DMA_ISOC_PID_MASK           (0x3 << 23)
#define DEV_DMA_ISOC_PID_SHIFT          23
#define DEV_DMA_ISOC_PID_DATA0          0
#define DEV_DMA_ISOC_PID_DATA2          1
#define DEV_DMA_ISOC_PID_DATA1          2
#define DEV_DMA_ISOC_PID_MDATA          3
#define DEV_DMA_ISOC_FRNUM_MASK         (0x7ff << 12)
#define DEV_DMA_ISOC_FRNUM_SHIFT        12
#define DEV_DMA_ISOC_TX_NBYTES_MASK     (0xfff << 0)
#define DEV_DMA_ISOC_TX_NBYTES_LIMIT    0xfff
#define DEV_DMA_ISOC_RX_NBYTES_MASK     (0x7ff << 0)
#define DEV_DMA_ISOC_RX_NBYTES_LIMIT    0x7ff
#define DEV_DMA_ISOC_NBYTES_SHIFT       0
#define DEV_DMA_NBYTES_MASK             (0xffff << 0)
#define DEV_DMA_NBYTES_SHIFT            0
#define DEV_DMA_NBYTES_LIMIT            0xffff

#define MAX_DMA_DESC_NUM_GENERIC        64
#define MAX_DMA_DESC_NUM_HS_ISOC        256

#endif /* DWC2_REGS_H */
