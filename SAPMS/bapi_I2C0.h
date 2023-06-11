/** @file bapiI2C0.h
 *  @brief This is the main file for I2C.
 *          Currently it is also for AM232 
 *          TODO: Verify if the current structure is good or
 *                  Create an independent folder for AM232
 *
 *  @author Y3913624
 */

#ifndef _BAPI_I2C0_H_
#define _BAPI_I2C0_H_

#include "common.h"
#include "hardware/i2c.h"


#define AM2320_SDA (4)
#define AM2320_SCL (5)

/** @name 	vTask_AM2320
  *	@brief 	Task fro the AM2320 module (Temperature and Humidity sensor)
  *
  * @param 	Void
  * @return Void
  */
void vTask_AM2320(void * pvParameters);

#endif //_BAPI_I2C0_H_
