/* k96Modbus.h - Library for serial data transfer to Senseair K96 NDIR
  Copyright (c) 2022 Jeffers Emerging Technologies, LLC.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

*/

#ifndef GPSSerial_h
#define GPSSerial_h

#define GPS_RX        21
#define GPS_TX        20
#define GPS_BAUD      9600
#define GPS_TIMEOUT   200

// The TinyGPS++ object
#include <TinyGPS++.h>

class GPSSerial
{
  private:
    
    TinyGPSPlus gps;

  public:
    GPSSerial();
    void init();
    String readResponse();
    
    float lng();
    float lat();
    String time();    
};

#endif
