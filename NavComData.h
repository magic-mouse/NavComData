/*
  NavComData - Library for controlling information
  for flight simulation navigation and communication.
  Created by Peter Nielsen, December, 2019
  Released into the public domain.
*/
#ifndef Morse_h
#define Morse_h

#include "Arduino.h"

class NavComData
{
  public:
    NavComData(String id);
    void setMhz(short mhz);
    void stepUpMhz();
    void stepDownMhz();
    void setKhz(short khz);
    void stepUpKhz();
    void stepDownKhz();
    unsigned short getKhz();
    unsigned short getMhz();
   private:
    unsigned short _mhz;
    unsigned short _khz;  
    String _name;
};

#endif
