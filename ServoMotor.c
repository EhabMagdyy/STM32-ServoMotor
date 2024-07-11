/*****************************************************************************************************************************
**********************************    Author  : Ehab Magdy Abdullah                      *************************************
**********************************    LinkedIn: https://www.linkedin.com/in/ehabmagdyy/  *************************************
**********************************    YouTube : https://www.youtube.com/@EhabMagdyy      *************************************
******************************************************************************************************************************/

#include "ServoMotor.h"

extern TIM_HandleTypeDef htim2;

void ServoMotor_Init(void)
{
	/* Initial position at 0 degree */
	SERVO_MOTOR_TIMER_TYPEDEF->SERVO_MOTOR_TIMER_CCR = 499;
	HAL_TIM_PWM_Start(SERVO_MOTOR_TIMER_HANDLER, SERVO_MOTOR_TIMER_CHANNEL);
}

void ServoMotor_Set_Angle(uint8_t angle)
{
	SERVO_MOTOR_TIMER_TYPEDEF->SERVO_MOTOR_TIMER_CCR = 499 + ((float)angle * (2000.0/180));
	HAL_TIM_PWM_Start(SERVO_MOTOR_TIMER_HANDLER, SERVO_MOTOR_TIMER_CHANNEL);
}
