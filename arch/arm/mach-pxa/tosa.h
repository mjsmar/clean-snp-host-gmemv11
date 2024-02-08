/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * Hardware specific definitions for Sharp SL-C6000x series of PDAs
 *
 * Copyright (c) 2005 Dirk Opfer
 *
 * Based on Sharp's 2.4 kernel patches
 */
#ifndef _ASM_ARCH_TOSA_H_
#define _ASM_ARCH_TOSA_H_ 1

#include "irqs.h" /* PXA_NR_BUILTIN_GPIO */

/*  TOSA Chip selects  */
#define TOSA_LCDC_PHYS		PXA_CS4_PHYS
/* Internel Scoop */
#define TOSA_CF_PHYS		(PXA_CS2_PHYS + 0x00800000)
/* Jacket Scoop */
#define TOSA_SCOOP_PHYS  	(PXA_CS5_PHYS + 0x00800000)

#define TOSA_NR_IRQS		(IRQ_BOARD_START + TC6393XB_NR_IRQS)
/*
 * SCOOP2 internal GPIOs
 */
#define TOSA_SCOOP_GPIO_BASE		PXA_NR_BUILTIN_GPIO
#define TOSA_SCOOP_PXA_VCORE1		SCOOP_GPCR_PA11
#define TOSA_GPIO_TC6393XB_REST_IN	(TOSA_SCOOP_GPIO_BASE + 1)
#define TOSA_GPIO_IR_POWERDWN		(TOSA_SCOOP_GPIO_BASE + 2)
#define TOSA_GPIO_SD_WP			(TOSA_SCOOP_GPIO_BASE + 3)
#define TOSA_GPIO_PWR_ON		(TOSA_SCOOP_GPIO_BASE + 4)
#define TOSA_SCOOP_AUD_PWR_ON		SCOOP_GPCR_PA16
#define TOSA_GPIO_BT_RESET		(TOSA_SCOOP_GPIO_BASE + 6)
#define TOSA_GPIO_BT_PWR_EN		(TOSA_SCOOP_GPIO_BASE + 7)
#define TOSA_SCOOP_AC_IN_OL		SCOOP_GPCR_PA19

/* GPIO Direction   1 : output mode / 0:input mode */
#define TOSA_SCOOP_IO_DIR     (TOSA_SCOOP_PXA_VCORE1 | \
		TOSA_SCOOP_AUD_PWR_ON)

/*
 * SCOOP2 jacket GPIOs
 */
#define TOSA_SCOOP_JC_GPIO_BASE		(PXA_NR_BUILTIN_GPIO + 12)
#define TOSA_GPIO_BT_LED		(TOSA_SCOOP_JC_GPIO_BASE + 0)
#define TOSA_GPIO_NOTE_LED		(TOSA_SCOOP_JC_GPIO_BASE + 1)
#define TOSA_GPIO_CHRG_ERR_LED		(TOSA_SCOOP_JC_GPIO_BASE + 2)
#define TOSA_GPIO_USB_PULLUP		(TOSA_SCOOP_JC_GPIO_BASE + 3)
#define TOSA_GPIO_TC6393XB_SUSPEND	(TOSA_SCOOP_JC_GPIO_BASE + 4)
#define TOSA_GPIO_TC6393XB_L3V_ON	(TOSA_SCOOP_JC_GPIO_BASE + 5)
#define TOSA_SCOOP_JC_WLAN_DETECT	SCOOP_GPCR_PA17
#define TOSA_GPIO_WLAN_LED		(TOSA_SCOOP_JC_GPIO_BASE + 7)
#define TOSA_SCOOP_JC_CARD_LIMIT_SEL	SCOOP_GPCR_PA19

/* GPIO Direction   1 : output mode / 0:input mode */
#define TOSA_SCOOP_JC_IO_DIR (TOSA_SCOOP_JC_CARD_LIMIT_SEL)

/*
 * PXA GPIOs
 */
#define TOSA_GPIO_POWERON		(0)
#define TOSA_GPIO_RESET			(1)
#define TOSA_GPIO_AC_IN			(2)
#define TOSA_GPIO_RECORD_BTN		(3)
#define TOSA_GPIO_SYNC			(4)	/* Cradle SYNC Button */
#define TOSA_GPIO_USB_IN		(5)
#define TOSA_GPIO_JACKET_DETECT		(7)
#define TOSA_GPIO_nSD_DETECT		(9)
#define TOSA_GPIO_nSD_INT		(10)
#define TOSA_GPIO_TC6393XB_CLK		(11)
#define TOSA_GPIO_BAT1_CRG		(12)
#define TOSA_GPIO_CF_CD			(13)
#define TOSA_GPIO_BAT0_CRG		(14)
#define TOSA_GPIO_TC6393XB_INT		(15)
#define TOSA_GPIO_BAT0_LOW		(17)
#define TOSA_GPIO_TC6393XB_RDY		(18)
#define TOSA_GPIO_ON_RESET		(19)
#define TOSA_GPIO_EAR_IN		(20)
#define TOSA_GPIO_CF_IRQ		(21)	/* CF slot0 Ready */
#define TOSA_GPIO_ON_KEY		(22)
#define TOSA_GPIO_VGA_LINE		(27)
#define TOSA_GPIO_TP_INT		(32)	/* Touch Panel pen down interrupt */
#define TOSA_GPIO_JC_CF_IRQ		(36)	/* CF slot1 Ready */
#define TOSA_GPIO_BAT_LOCKED		(38)	/* Battery locked */
#define TOSA_GPIO_IRDA_TX		(47)
#define TOSA_GPIO_TG_SPI_SCLK		(81)
#define TOSA_GPIO_TG_SPI_CS		(82)
#define TOSA_GPIO_TG_SPI_MOSI		(83)
#define TOSA_GPIO_BAT1_LOW		(84)

#define TOSA_GPIO_HP_IN			GPIO_EAR_IN

#define TOSA_GPIO_MAIN_BAT_LOW		GPIO_BAT0_LOW

#define TOSA_KEY_STROBE_NUM		(11)
#define TOSA_KEY_SENSE_NUM		(7)

#define TOSA_GPIO_HIGH_STROBE_BIT	(0xfc000000)
#define TOSA_GPIO_LOW_STROBE_BIT	(0x0000001f)
#define TOSA_GPIO_ALL_SENSE_BIT		(0x00000fe0)
#define TOSA_GPIO_ALL_SENSE_RSHIFT	(5)
#define TOSA_GPIO_STROBE_BIT(a)		GPIO_bit(58+(a))
#define TOSA_GPIO_SENSE_BIT(a)		GPIO_bit(69+(a))
#define TOSA_GAFR_HIGH_STROBE_BIT	(0xfff00000)
#define TOSA_GAFR_LOW_STROBE_BIT	(0x000003ff)
#define TOSA_GAFR_ALL_SENSE_BIT		(0x00fffc00)
#define TOSA_GPIO_KEY_SENSE(a) 		(69+(a))
#define TOSA_GPIO_KEY_STROBE(a)		(58+(a))

/*
 * Interrupts
 */
#define TOSA_IRQ_GPIO_WAKEUP        	PXA_GPIO_TO_IRQ(TOSA_GPIO_WAKEUP)
#define TOSA_IRQ_GPIO_AC_IN         	PXA_GPIO_TO_IRQ(TOSA_GPIO_AC_IN)
#define TOSA_IRQ_GPIO_RECORD_BTN    	PXA_GPIO_TO_IRQ(TOSA_GPIO_RECORD_BTN)
#define TOSA_IRQ_GPIO_SYNC          	PXA_GPIO_TO_IRQ(TOSA_GPIO_SYNC)
#define TOSA_IRQ_GPIO_USB_IN        	PXA_GPIO_TO_IRQ(TOSA_GPIO_USB_IN)
#define TOSA_IRQ_GPIO_JACKET_DETECT 	PXA_GPIO_TO_IRQ(TOSA_GPIO_JACKET_DETECT)
#define TOSA_IRQ_GPIO_nSD_INT       	PXA_GPIO_TO_IRQ(TOSA_GPIO_nSD_INT)
#define TOSA_IRQ_GPIO_nSD_DETECT    	PXA_GPIO_TO_IRQ(TOSA_GPIO_nSD_DETECT)
#define TOSA_IRQ_GPIO_BAT1_CRG      	PXA_GPIO_TO_IRQ(TOSA_GPIO_BAT1_CRG)
#define TOSA_IRQ_GPIO_CF_CD         	PXA_GPIO_TO_IRQ(TOSA_GPIO_CF_CD)
#define TOSA_IRQ_GPIO_BAT0_CRG      	PXA_GPIO_TO_IRQ(TOSA_GPIO_BAT0_CRG)
#define TOSA_IRQ_GPIO_TC6393XB_INT    	PXA_GPIO_TO_IRQ(TOSA_GPIO_TC6393XB_INT)
#define TOSA_IRQ_GPIO_BAT0_LOW      	PXA_GPIO_TO_IRQ(TOSA_GPIO_BAT0_LOW)
#define TOSA_IRQ_GPIO_EAR_IN        	PXA_GPIO_TO_IRQ(TOSA_GPIO_EAR_IN)
#define TOSA_IRQ_GPIO_CF_IRQ        	PXA_GPIO_TO_IRQ(TOSA_GPIO_CF_IRQ)
#define TOSA_IRQ_GPIO_ON_KEY        	PXA_GPIO_TO_IRQ(TOSA_GPIO_ON_KEY)
#define TOSA_IRQ_GPIO_VGA_LINE      	PXA_GPIO_TO_IRQ(TOSA_GPIO_VGA_LINE)
#define TOSA_IRQ_GPIO_TP_INT        	PXA_GPIO_TO_IRQ(TOSA_GPIO_TP_INT)
#define TOSA_IRQ_GPIO_JC_CF_IRQ     	PXA_GPIO_TO_IRQ(TOSA_GPIO_JC_CF_IRQ)
#define TOSA_IRQ_GPIO_BAT_LOCKED    	PXA_GPIO_TO_IRQ(TOSA_GPIO_BAT_LOCKED)
#define TOSA_IRQ_GPIO_BAT1_LOW      	PXA_GPIO_TO_IRQ(TOSA_GPIO_BAT1_LOW)
#define TOSA_IRQ_GPIO_KEY_SENSE(a)  	PXA_GPIO_TO_IRQ(69+(a))

#define TOSA_IRQ_GPIO_MAIN_BAT_LOW 	PXA_GPIO_TO_IRQ(TOSA_GPIO_MAIN_BAT_LOW)

#define TOSA_KEY_SYNC		KEY_102ND /* ??? */

#ifndef CONFIG_TOSA_USE_EXT_KEYCODES
#define TOSA_KEY_RECORD		KEY_YEN
#define TOSA_KEY_ADDRESSBOOK	KEY_KATAKANA
#define TOSA_KEY_CANCEL		KEY_ESC
#define TOSA_KEY_CENTER		KEY_HIRAGANA
#define TOSA_KEY_OK		KEY_HENKAN
#define TOSA_KEY_CALENDAR	KEY_KATAKANAHIRAGANA
#define TOSA_KEY_HOMEPAGE	KEY_HANGEUL
#define TOSA_KEY_LIGHT		KEY_MUHENKAN
#define TOSA_KEY_MENU		KEY_HANJA
#define TOSA_KEY_FN		KEY_RIGHTALT
#define TOSA_KEY_MAIL		KEY_ZENKAKUHANKAKU
#else
#define TOSA_KEY_RECORD		KEY_RECORD
#define TOSA_KEY_ADDRESSBOOK	KEY_ADDRESSBOOK
#define TOSA_KEY_CANCEL		KEY_CANCEL
#define TOSA_KEY_CENTER		KEY_SELECT /* ??? */
#define TOSA_KEY_OK		KEY_OK
#define TOSA_KEY_CALENDAR	KEY_CALENDAR
#define TOSA_KEY_HOMEPAGE	KEY_HOMEPAGE
#define TOSA_KEY_LIGHT		KEY_KBDILLUMTOGGLE
#define TOSA_KEY_MENU		KEY_MENU
#define TOSA_KEY_FN		KEY_FN
#define TOSA_KEY_MAIL		KEY_MAIL
#endif

#endif /* _ASM_ARCH_TOSA_H_ */
