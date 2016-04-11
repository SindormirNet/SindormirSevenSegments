#include <SindormirSevenSegments.h>

Sindormir7segs mi7S;

void setup() {
  mi7S.commonType(CATODO);
  mi7S.attach(2,3,4,5,6,7,8,9);
}

void loop() {
  for (int i=0; i<16; i++){
    mi7S.print(i);
    delay(500);
  }
}
