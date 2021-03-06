/* #include "module_sensor.h" */

#ifndef __MODULE_SENSOR_H
#define __MODULE_SENSOR_H

#include "stm32f4xx.h"
/*=====================================================================================================*/
/*=====================================================================================================*/
#define ACC_X_Horizontal 0
#define ACC_Y_Horizontal 0
#define ACC_Z_Horizontal 8192
#define GYR_X_Horizontal 0
#define GYR_Y_Horizontal 0
#define GYR_Z_Horizontal 0
#define MAG_X_Horizontal 0
#define MAG_Y_Horizontal 0
#define MAG_Z_Horizontal 0
/*=====================================================================================================*/
/*=====================================================================================================*/
typedef struct {
  s16 X;
  s16 Y;
  s16 Z;
  s16 OffsetX;
  s16 OffsetY;
  s16 OffsetZ;
  float TrueX;
  float TrueY;
  float TrueZ;
} Sensor;
/*=====================================================================================================*/
/*=====================================================================================================*/
extern Sensor Acc;
extern Sensor Gyr;
extern Sensor Mag;
extern Sensor Ang;
extern float Ellipse[5];
/*=====================================================================================================*/
/*=====================================================================================================*/
u8 Sensor_Init( void );
void EllipseFitting( float* Ans, s16* MagDataX, s16* MagDataY, u8 Num );
/*=====================================================================================================*/
/*=====================================================================================================*/
#endif
