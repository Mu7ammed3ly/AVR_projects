/*
 * LCD_Interface.h
 *
 *  Created on: Oct 24, 2022
 *      Author: LENOVO
 */

#ifndef HAL_LCD_HEADER_LCD_INTERFACE_H_
#define HAL_LCD_HEADER_LCD_INTERFACE_H_

#include "LCD_Config.h"

#include "../../../MCAL/DIO/Header/DIO_Config.h"
#include "../../../MCAL/DIO/Header/DIO_Private.h"
#include "../../../MCAL/DIO/Header/DIO_Interface.h"
#include "../../../MCAL/DIO/Header/DIO_Register.h"

#include "../../../Common/Bit_Math.h"
#include "../../../Common/STD_Types.h"
#include "../../../Common/Macros.h"

void LCD_VoidInit(void);
void LCD_VoidSendCommand(u8 LCD_Command);
void LCD_VoidSendDataChar(u8 LCD_DataChar);
void LCD_VoidSendDataString(u8* LCD_DataString);
void LCD_VoidGoToXY(u8 X_Position,u8 Y_Position);
void LCD_VoidWriteSpecialChar(u8 *Pattern , u8 Patern_Numper ,u8 X_Position,u8 Y_Position);
void LCD_VoidSendNumber(u32 Numper);
void LCD_VoidClear(void);

#endif /* HAL_LCD_HEADER_LCD_INTERFACE_H_ */
