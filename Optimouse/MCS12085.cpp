/*MCS12085.cpp
Additional sensor support for OptiMouse library added by Arsenio Dev
/*
/******************************************************************************
 * Includes
 ******************************************************************************/

#include "Arduino.h"
#include "OptiMouse.h"
#include "MCS12085.h"

/******************************************************************************
 * Definitions
 ******************************************************************************/

#define Delta_Y				0x02
#define Delta_X				0x03

/******************************************************************************
 * Constructors
 ******************************************************************************/

MCS12085::MCS12085(uint8_t sclkPin, uint8_t sdioPin) : OptiMouse::OptiMouse(sclkPin, sdioPin)
{

}

/******************************************************************************
 * User API
 ******************************************************************************/

signed char MCS12085::dx(void)
{
	return (signed char) readRegister(Delta_X);
}

signed char MCS12085::dy(void)
{
	return (signed char) readRegister(Delta_Y);
}

// Private Methods /////////////////////////////////////////////////////////////
