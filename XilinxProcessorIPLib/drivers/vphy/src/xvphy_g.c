
/*******************************************************************
*
* CAUTION: This file is automatically generated by HSI.
* Version:
* DO NOT EDIT.
*
* Copyright (C) 2010-2016 Xilinx, Inc. All Rights Reserved.*
*Permission is hereby granted, free of charge, to any person obtaining a copy
*of this software and associated documentation files (the Software), to deal
*in the Software without restriction, including without limitation the rights
*to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
*copies of the Software, and to permit persons to whom the Software is
*furnished to do so, subject to the following conditions:
*
*The above copyright notice and this permission notice shall be included in
*all copies or substantial portions of the Software.
*
* Use of the Software is limited solely to applications:
*(a) running on a Xilinx device, or
*(b) that interact with a Xilinx device through a bus or interconnect.
*
*THE SOFTWARE IS PROVIDED AS IS, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
*IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
*FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
*XILINX BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
*WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT
*OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*
*Except as contained in this notice, the name of the Xilinx shall not be used
*in advertising or otherwise to promote the sale, use or other dealings in
*this Software without prior written authorization from Xilinx.
*

*
* Description: Driver configuration
*
*******************************************************************/

#include "xparameters.h"
#include "xvphy.h"

/*
* The configuration table for devices
*/

XVphy_Config XVphy_ConfigTable[XPAR_XVPHY_NUM_INSTANCES] =
{
	{
		XPAR_VID_PHY_CONTROLLER_DEVICE_ID,
		XPAR_VID_PHY_CONTROLLER_BASEADDR,
		XPAR_VID_PHY_CONTROLLER_TRANSCEIVER,
		XPAR_VID_PHY_CONTROLLER_TX_NO_OF_CHANNELS,
		XPAR_VID_PHY_CONTROLLER_RX_NO_OF_CHANNELS,
		XPAR_VID_PHY_CONTROLLER_TX_PROTOCOL,
		XPAR_VID_PHY_CONTROLLER_RX_PROTOCOL,
		XPAR_VID_PHY_CONTROLLER_TX_REFCLK_SEL,
		XPAR_VID_PHY_CONTROLLER_RX_REFCLK_SEL,
		XPAR_VID_PHY_CONTROLLER_TX_PLL_SELECTION,
		XPAR_VID_PHY_CONTROLLER_RX_PLL_SELECTION,
		XPAR_VID_PHY_CONTROLLER_NIDRU,
		XPAR_VID_PHY_CONTROLLER_NIDRU_REFCLK_SEL,
		XPAR_VID_PHY_CONTROLLER_INPUT_PIXELS_PER_CLOCK,
		XPAR_VID_PHY_CONTROLLER_TX_BUFFER_BYPASS,
		XPAR_VID_PHY_CONTROLLER_HDMI_FAST_SWITCH,
		XPAR_VID_PHY_CONTROLLER_TRANSCEIVER_WIDTH,
		XPAR_VID_PHY_CONTROLLER_ERR_IRQ_EN,
		XPAR_VID_PHY_CONTROLLER_AXI_LITE_FREQ_HZ
	}
};
