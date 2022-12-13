/*
 * main.h
 *
 *  Created on: Dec 13, 2022
 *      Author: sujee
 */

#ifndef MAIN_H_
#define MAIN_H_

#define HIGH 1
#define LOW 0
#define DELAY_COUNT 500000UL

#include<stdint.h>

typedef struct{
	uint32_t afio_en :1;
	uint32_t reserved1 :1;
	uint32_t iopA_en :1;
	uint32_t iopB_en :1;
	uint32_t iopC_en :1;
	uint32_t iopD_en :1;
	uint32_t iopE_en :1;
	uint32_t iopF_en :1;
	uint32_t iopG_en :1;
	uint32_t adc1_en :1;
	uint32_t adc2_en :1;
	uint32_t tim1_en :1;
	uint32_t spi1_en :1;
	uint32_t tim8_en :1;
	uint32_t usart1_en :1;
	uint32_t adc3_en :1;
	uint32_t reserved2 :3;
	uint32_t tim9_en :1;
	uint32_t tim10_en :1;
	uint32_t tim11_en :1;
	uint32_t reserved3 :10;

}RCC_APB2ENR_t;

typedef struct{
	uint32_t mode_8 :2;
	uint32_t cnf_8	:2;
	uint32_t mode_9 :2;
	uint32_t cnf_9	:2;
	uint32_t mode_10 :2;
	uint32_t cnf_10	:2;
	uint32_t mode_11 :2;
	uint32_t cnf_11	:2;
	uint32_t mode_12 :2;
	uint32_t cnf_12	:2;
	uint32_t mode_13 :2;
	uint32_t cnf_13	:2;
	uint32_t mode_14 :2;
	uint32_t cnf_14	:2;
	uint32_t mode_15 :2;
	uint32_t cnf_15	:2;

}GPIOx_CRH_t;

typedef struct{
	uint32_t pin_0 :1;
	uint32_t pin_1 :1;
	uint32_t pin_2 :1;
	uint32_t pin_3 :1;
	uint32_t pin_4 :1;
	uint32_t pin_5 :1;
	uint32_t pin_6 :1;
	uint32_t pin_7 :1;
	uint32_t pin_8 :1;
	uint32_t pin_9 :1;
	uint32_t pin_10 :1;
	uint32_t pin_11 :1;
	uint32_t pin_12 :1;
	uint32_t pin_13 :1;
	uint32_t pin_14 :1;
	uint32_t pin_15 :1;

}GPIOx_ODR_t;

#endif /* MAIN_H_ */
