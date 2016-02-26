#include <SindormirSevenSegments.h>

SindormirSevenSegments mi7S(2,3,4,5,6,7,8,9);

void setup() {
  
}

void loop() {
  for (int i=0; i<16; i++){
    mi7S.print(i);
    delay(500);
  }
}
