/*
 * main.c
 *
 *  Created on: Oct 22, 2022
 *      Author: LENOVO
 */
#include <avr/io.h>
#include <util/delay.h>

#include "../MCAL/DIO/Header/DIO_Interface.h"
#include "../MCAL/TIMER/Header/TIMER_Interface.h"

#include "../Common/Macros.h"
#include "../Common/Bit_Math.h"
#include "../Common/STD_Types.h"

#include "../HAL/LCD/Header/LCD_Interface.h"
#include "../HAL/SERVO_MOTOR/HEADER/SERVO_Interface.h"
#include "../HAL/Bluetooth/Bluetooth_interface.h"

#include "Config.h"

#include <avr/io.h>
#include <util/delay.h>



void main(void) {

	Blutooth_Init();
	Servo_VoidInitD4();
	u8 blu ;


	DIO_VoidSetPinNumDir(LED_Group,LED_Green,Output_Pin);
	DIO_VoidSetPinNumDir(LED_Group,LED_Red,Output_Pin);
	while (1) {

		blu=Blutooth_ReceiveChar();

		if(blu== 'o' || blu== 'O')
		{
			DIO_VoidSetPinNumValue(LED_Group,LED_Green,High_Pin);
			DIO_VoidSetPinNumValue(LED_Group,LED_Red,Low_Pin);
			Servo_VoidRotateAngleD4(180);
			_delay_ms(100);
		}
		else if(blu== 'c' || blu== 'C')
		{
			DIO_VoidSetPinNumValue(LED_Group,LED_Green,Low_Pin);
			DIO_VoidSetPinNumValue(LED_Group,DIO_Pin6,High_Pin);
			Servo_VoidRotateAngleD4(0);
			_delay_ms(100);
		}
	}
}





