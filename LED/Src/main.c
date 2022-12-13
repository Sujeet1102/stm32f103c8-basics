/**
 ******************************************************************************
 * @file           : main.c/LED-blink
 * @author         : Sujeet Jagtap
 * @brief          : Main program body


 PORT C Address range 0x4001 1000 - 0x4001 13FF
 Port configuration register high (GPIOx_CRH) | Address offset: 0x04 | Left Shift 1 by 20 and OR to Set
 Port output data register (GPIOx_ODR) | Address offset: 0x0C | Left Shift 1 by 13 and OR to Set

 RCC Address range 0x4002 1000 - 0x4002 13FF
 APB2 peripheral clock enable register (RCC_APB2ENR) | Address: 0x18 | Set Bit 4

 1. Enable RCC Clock peripheral
 2. Set PORTC as output mode
 3. Toggle PORTC PIN13 (In-built LED)
 */
#include "main.h"
#include <stdint.h>
void delay();

int main(void)
{
	RCC_APB2ENR_t volatile *const pClkctrlReg = (RCC_APB2ENR_t*)(0x40021000+0x18);
	GPIOx_CRH_t volatile *const pPortCModeReg = (GPIOx_CRH_t*)(0x40011000+0x04);
	GPIOx_ODR_t volatile *const pPortCOutReg = (GPIOx_ODR_t*)(0x40011000+0x0C);

	pClkctrlReg->iopC_en = 0x01;
	pPortCModeReg->mode_13 = 0x01;
	pPortCModeReg->cnf_13 = 0x00;

    while(1){

    	pPortCOutReg->pin_13 = HIGH;
    	delay();
    	pPortCOutReg->pin_13 = LOW;
    	delay();
    }
}
void delay(){
	for(int i=0; i< DELAY_COUNT; i++);
}
