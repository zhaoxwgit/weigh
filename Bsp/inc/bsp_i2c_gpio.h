/*
*********************************************************************************************************
*
*	ģ������ : I2C��������ģ��
*	�ļ����� : bsp_i2c_gpio.h
*	��    �� : V1.0
*	˵    �� : ͷ�ļ���
*
*	Copyright (C), 2012-2013, ���������� www.armfly.com
*
*********************************************************************************************************
*/

#ifndef _BSP_I2C_GPIO_H
#define _BSP_I2C_GPIO_H

#include "stm32f10x.h"
#include "stm32f10x_bitband.h"

/* �����дSCL��SDA�ĺ� */
#define I2C_SCL_OUT  GPIOB6_OUT
#define I2C_SDA_OUT  GPIOB7_OUT

#define I2C_SCL_IN   GPIOB6_IN
#define I2C_SDA_IN   GPIOB7_IN

#define I2C_WR	0		/* д����bit */
#define I2C_RD	1		/* ������bit */

void i2c_Init(void);
void i2c_Start(void);
void i2c_Stop(void);
void i2c_SendByte(uint8_t _ucByte);
uint8_t i2c_ReadByte(void);
uint8_t i2c_WaitAck(void);
void i2c_Ack(void);
void i2c_NAck(void);
uint8_t i2c_CheckDevice(uint8_t _Address);

#endif