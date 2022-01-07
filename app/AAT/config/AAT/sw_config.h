/*
 * sw_config.h
 *
 *  Created on: 2021. 9. 15.
 *      Author: YuJin Park
 *
 */

#ifndef APPLICATION_CONFIG_SW_CONFIG_H_
#define APPLICATION_CONFIG_SW_CONFIG_H_

#define PAAR_DEVICE_NAME                		"AA_TAG" /**< Name of device. Will be included in the advertising data. */


/*
enum{
	TEST_DEVICE_TYPE_FAUSET = 0,
	TEST_DEVICE_TYPE_DRAWER,
	TEST_DEVICE_TYPE_REFRIGATOR,
};
*/

#define TEST_DEVICE_TYPE_FAUSET			0x01
#define TEST_DEVICE_TYPE_DRAWER			0x02
#define TEST_DEVICE_TYPE_REFRIGATOR		0x03


#define		AAT_SW_MODE_ACC 			0x01
#define		AAT_SW_MODE_GYRO			0x02


#define ADL_DEVICE_TYPE_WINDOW				0x01
#define ADL_DEVICE_TYPE_DRAWER				0x02
#define ADL_DEVICE_TYPE_DOOR				0x03
#define ADL_DEVICE_TYPE_COOKING_UTENSIL		0x04
#define ADL_DEVICE_TYPE_REMOTE_CONTROL		0x05
#define ADL_DEVICE_TYPE_CLEANING_SUPPLY		0x06
#define ADL_DEVICE_TYPE_REFRIGERATOR		0x07
#define ADL_DEVICE_TYPE_TV					0x08
#define ADL_DEVICE_TYPE_COFFEE_PORT			0x09
#define ADL_DEVICE_TYPE_ELECTRIC_FAN		0x0A
#define ADL_DEVICE_TYPE_HAIR_DRYER			0x0B
#define ADL_DEVICE_TYPE_VACCUM_CLEANER		0x0C
#define ADL_DEVICE_TYPE_TASMOTOR			0x0D
#define ADL_DEVICE_TYPE_MICROWAVE			0x0E
#define ADL_DEVICE_TYPE_PC					0x0F
#define ADL_DEVICE_TYPE_TOASTER				0x10
#define ADL_DEVICE_TYPE_ELECTRIC_HEATER		0x11
#define ADL_DEVICE_TYPE_FAUCET				0x12

#define TEST_DEVICE_TYPE				TEST_DEVICE_TYPE_DRAWER

#if(TEST_DEVICE_TYPE == TEST_DEVICE_TYPE_FAUSET)
#define AAT_DEFUALT_SW_MODE				AAT_SW_MODE_ACC

#define ADL_DEVICE_TYPE0	ADL_DEVICE_TYPE_FAUCET
#define ADL_DEVICE_TYPE1	0x02

#elif(TEST_DEVICE_TYPE == TEST_DEVICE_TYPE_DRAWER)
#define AAT_DEFUALT_SW_MODE				AAT_SW_MODE_ACC

#define ADL_DEVICE_TYPE0	ADL_DEVICE_TYPE_FAUCET
#define ADL_DEVICE_TYPE1	0x01

#elif(TEST_DEVICE_TYPE == TEST_DEVICE_TYPE_REFRIGATOR)
#define AAT_DEFUALT_SW_MODE				AAT_SW_MODE_GYRO

#define ADL_DEVICE_TYPE0	ADL_DEVICE_TYPE_REFRIGERATOR
#define ADL_DEVICE_TYPE1	0x01
#endif

#define SAAL_DEFAULT_LOCATION_INFO			"테스트룸A_거실_부엌"
//#define SAAL_DEFAULT_LOCATION_INFO			"테스트룸A_화장실"
//#define SAAL_DEFAULT_LOCATION_INFO			"테스트룸A_방1"

#define BLE_DEBUGGING_LED_ENABLE			0

#define PAAR_ID_0					(0x06)
#define PAAR_ID_1					(0x00)
#define PAAR_ID_2					(0x01)
#define PAAR_ID_3					(0xE0)

#define AAT_SERVICE_ID					0x12

//software mode = AAT_SW_MODE_NORMAL
#define AAT_SW_MODE_NORMAL						0

#define SP_SW_MODE_SETUP							AAT_SW_MODE_NORMAL

#define TEST_MAX_CONNECTION_DEVICE		3

#define TEST_SEND_MSG_DELAY			500
#define TEST_SCAN_START_DELAY		500
#define TEST_ADV_START_DELAY		2000
#define TEST_CONNECTION_DELAY		100

#endif /* APPLICATION_CONFIG_SW_CONFIG_H_ */