/* 
 * File:   ModuleExterne.cpp
 * Author: Orlande
 * 
 * Created on 13 Novembre 2016, 14:45
 * Analog input 20 I2C SDA
   Analog input 21 I2C SCL
 */

#include <StandardCplusplus.h>
#include "Arduino.h"
#include <Wire.h> //I2C Arduino Library
#define address 0x1E //0011110b, I2C 7bit address of HMC5883 (Pour Magnetometre_3Axes)
#include "ModuleExterneType.h"

ModuleExterne(){
}

ModuleExterne::ModuleExterne (){
  SetType(ModuleExterneType::undefined);
}

