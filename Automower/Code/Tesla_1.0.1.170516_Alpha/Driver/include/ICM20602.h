#ifndef __ICM20602_H
#define __ICM20602_H

#include <stdio.h>
#include <math.h>
#include <rthw.h>
#include <rtthread.h>
#include "stm32f4xx.h"
#include "usart.h"
#include "board.h"

#define ICM20602_SELF_TEST_X_GYRO 0X00
#define ICM20602_SELF_TEST_Y_GYRO 0X01
#define ICM20602_SELF_TEST_Z_GYRO 0X02
#define ICM20602_SELF_TEST_X_ACCEL 0X0D
#define ICM20602_SELF_TEST_Y_ACCEL 0X0E
#define ICM20602_SELF_TEST_Z_ACCEL 0X0F

#define ICM20602_XG_OFFS_USRH 0X13
#define ICM20602_XG_OFFS_USRL 0X14
#define ICM20602_YG_OFFS_USRH 0X15
#define ICM20602_YG_OFFS_USRL 0X16
#define ICM20602_ZG_OFFS_USRH 0X17
#define ICM20602_ZG_OFFS_USRL 0X18

#define ICM20602_SMPLRT_DIV   		0X19
#define ICM20602_CONFIG 					0X1A
#define ICM20602_GYRO_CONFIG  		0X1B
#define ICM20602_ACCEL_CONFIG 		0X1C
#define ICM20602_ACCEL_CONFIG_2   0X1D


#define ICM20602_LP_MODE_CFG    		0X1E
#define ICM20602_ACCEL_WOM_THR 			0X1F

#define ICM20602_FIFO_EN  		0X23

#define ICM20602_FSYNC_INT 		 0X36
#define ICM20602_INT_PIN_CFG   0X37

#define ICM20602_INT_ENABLE		 0X38
#define ICM20602_INT_STATUS    0X3A



#define	ICM20602_ACC_X_H	0x3B
#define	ICM20602_ACC_X_L	0x3C
#define	ICM20602_ACC_Y_H	0x3D
#define	ICM20602_ACC_Y_L	0x3E
#define	ICM20602_ACC_Z_H	0x3F
#define	ICM20602_ACC_Z_L	0x40

#define	ICM20602_TEMP_H		0x41
#define	ICM20602_TEMP_L		0x42

#define	ICM20602_GYRO_X_H		0x43
#define	ICM20602_GYRO_X_L		0x44	
#define	ICM20602_GYRO_Y_H		0x45
#define	ICM20602_GYRO_Y_L		0x46
#define	ICM20602_GYRO_Z_H		0x47
#define	ICM20602_GYRO_Z_L		0x48

		
#define	ICM20602_SIGNAL_PATH_RESET  0x68
#define	ICM20602_ACCEL_INTEL_CTRL   0x69
#define	ICM20602_USER_CTRL          0x6A
#define	ICM20602_PWR_MGMT_1         0x6B
#define	ICM20602_PWR_MGMT_2         0x6C


#define	ICM20602_FIFO_COUNTH         0x72
#define	ICM20602_FIFO_COUNTL         0x73
#define	ICM20602_FIFO_R_W            0x74 
#define	ICM20602_WHO_AM_I		         0x75	

#define	ICM20602_XA_OFFSET_H        0x77
#define	ICM20602_XA_OFFSET_L        0x78

#define	ICM20602_YA_OFFSET_H        0x7A
#define	ICM20602_YA_OFFSET_L        0x7B

#define	ICM20602_ZA_OFFSET_H         0x7D
#define	ICM20602_ZA_OFFSET_L         0x7E

#define CS_ICM0    GPIOC->BSRRH=GPIO_Pin_4
#define CS_ICM1    GPIOC->BSRRL=GPIO_Pin_4



typedef struct{

		int16_t X;
		int16_t Y;
		int16_t Z;
				
}ICM20602_TYPE;


void SPI4_Master_Init(void);
void ICM20602_getMotion6(T_mpu_20602 *mpu);
void ICM20602_CS_Config(void);
void ICM20602_Init(void);

#endif