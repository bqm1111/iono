/*  <file name> - <file description>

	Copyright (C) 2014-2015 Sfera Labs, a division of Home Systems Consulting S.p.A. - All rights reserved.

	For information, see the iono web site:
	http://www.iono.cc/
	
   This library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.
   See file LICENSE.txt for further informations on licensing terms.
*/

#include <Iono.h>

float val = 0;
int m = 1;

void setup() {
}

void loop() {
  Iono.write(AO1, val);
  val += m * 0.1;
  if (val > 10) {
    m = -1;
    val = 10;
  } else if (val < 0) {
    m = 1;
    val = 0;
  }
  delay(20);
}
