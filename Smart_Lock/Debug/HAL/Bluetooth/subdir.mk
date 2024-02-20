################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../HAL/Bluetooth/Blutooth_program.c \
../HAL/Bluetooth/USART_program.c 

OBJS += \
./HAL/Bluetooth/Blutooth_program.o \
./HAL/Bluetooth/USART_program.o 

C_DEPS += \
./HAL/Bluetooth/Blutooth_program.d \
./HAL/Bluetooth/USART_program.d 


# Each subdirectory must supply rules for building sources it contributes
HAL/Bluetooth/%.o: ../HAL/Bluetooth/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


