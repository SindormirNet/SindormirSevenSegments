#include <SindormirSevenSegments.h>

Sindormir7segs mi7S;

void setup() {
  mi7S.commonType(CATODO);
  mi7S.attach(2,3,4,5,6,7,8,9);
  mi7S.lampTest();
  delay(2000);
  mi7S.clear();
}

void loop() {
  
}
