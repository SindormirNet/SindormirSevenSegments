#include <SindormirSevenSegments.h>

Sindormir7segs mi7S;

void setup() {
  mi7S.commonType(CATODO);
  mi7S.attach(2,3,4,5,6,7,8,9);
}

void loop() {
  mi7S.setDot();
  delay(1000);
  mi7S.clearDot();
  delay(1000);
}
