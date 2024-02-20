/*
 * LCD_Config.h
 *
 *  Created on: Oct 24, 2022
 *      Author: LENOVO
 */

#ifndef HAL_LCD_HEADER_LCD_CONFIG_H_
#define HAL_LCD_HEADER_LCD_CONFIG_H_

#include "../../../MCAL/DIO/Header/DIO_Config.h"
#include "../../../MCAL/DIO/Header/DIO_Private.h"
#include "../../../MCAL/DIO/Header/DIO_Interface.h"
#include "../../../MCAL/DIO/Header/DIO_Register.h"

#include "../../../Common/Bit_Math.h"
#include "../../../Common/STD_Types.h"
#include "../../../Common/Macros.h"

#define LCD_DataPort   DIO_GroupD
#define LCD_CtrlPort   DIO_GroupC

#define LCD_RsPin      DIO_Pin2
#define LCD_RwPin      DIO_Pin1
#define LCD_EPin       DIO_Pin0

#endif /* HAL_LCD_HEADER_LCD_CONFIG_H_ */
