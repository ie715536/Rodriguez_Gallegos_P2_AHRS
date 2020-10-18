/*
 * mahony.h
 *
 *  Created on: 17 oct. 2020
 *      Author: urik_
 */

#ifndef MAHONY_H_
#define MAHONY_H_

//----------------------------------------------------------------------------------------------------
// Variable declaration
typedef struct
{
	float roll;
	float pitch;
	float yaw;
}MahonyAHRSEuler_t;
//---------------------------------------------------------------------------------------------------
// Function declarations

MahonyAHRSEuler_t MahonyAHRSupdate(float gx, float gy, float gz, float ax, float ay, float az, float mx, float my, float mz);
MahonyAHRSEuler_t MahonyAHRSupdateIMU(float gx, float gy, float gz, float ax, float ay, float az);

#endif /* MAHONY_H_ */
