# ArduinoSevenSegments
Simple Seven Segments library for Arduino

## Declaración de objeto ##

Antes del `setup()`:

`SindormirSevenSegments my7S(pin_seg_a, pin_seg_b, pin_seg_c, pin_seg_d, pin_seg_e, pin_seg_f, pin_seg_g, pin_seg_dp);`

## Mostrar un número ##

`my7S.print(numero);`

Donde número está en un rango del 0 al 15 (0 a F).
