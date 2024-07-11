/*****************************************************************************************************************************
**********************************    Author  : Ehab Magdy Abdullah                      *************************************
**********************************    Linkedin: https://www.linkedin.com/in/ehabmagdyy/  *************************************
**********************************    Youtube : https://www.youtube.com/@EhabMagdyy      *************************************
******************************************************************************************************************************/

#ifndef INC_SERVOMOTOR_H_
#define INC_SERVOMOTOR_H_


#include "stm32f4xx_hal.h"


#define SERVO_MOTOR_TIMER_HANDLER		&htim2
#define SERVO_MOTOR_TIMER_CHANNEL		TIM_CHANNEL_1
#define SERVO_MOTOR_TIMER_TYPEDEF		TIM2
#define SERVO_MOTOR_TIMER_CCR			CCR1


void ServoMotor_Init(void);
void ServoMotor_Set_Angle(uint8_t angle);


#endif /* INC_SERVOMOTOR_H_ */
