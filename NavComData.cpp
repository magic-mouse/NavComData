/*
  NavComData - Library for controlling information
  for flight simulation navigation and communication.
  Created by Peter Nielsen, December, 2019
  Released into the public domain.
*/

#include "Arduino.h"
#include "NavComData.h"

NavComData::NavComData(String id){
  _name = id;
}

    void NavComData::setMhz(short mhz){
      _mhz = mhz;
    }
    void NavComData::stepUpMhz(){
      _mhz++;
    }
    void NavComData::stepDownMhz(){
      _mhz--;  
    }
    void NavComData::setKhz(short khz){
      _khz = khz;
      }
    void NavComData::stepUpKhz(){
      _khz++;
      }
    void NavComData::stepDownKhz(){
      _khz--;
      }
    unsigned short NavComData::getKhz(){
      return _khz;
      }
    unsigned short NavComData::getMhz(){
      return _mhz;
      }
