# SindormirSevenSegments
Simple Seven Segments library for Arduino

## Declaración de objeto ##

Antes de `setup()`:

```
#include <SindormirSevenSegments.h>

SindormirSevenSegments mi7S;
```

También está permitido usar la forma corta en la declaración del objeto, usando `Sindormir7segs`:

```
#include <SindormirSevenSegments.h>

Sindormir7segs mi7S;
```

## Inicialización del objeto ##

La inicialización del objeto consta de dos partes: La asignación de los pines usados por el _display_, y la determinación de polaridad del _display_.

```
void setup(){
    mi7S.commonType(CATODO);
    mi7S.attach(2,3,4,5,6,7,8,9);
}
```

### Método `commonType()` ###

Este método permite indicar a la librería si el _display_ es de tipo **ánodo común** o de **cátodo común**. Si bien el método está diseñado para pasarle un caracter `'a'` para ánodo común o `'k'` para cátodo común, se han definido algunos alias más amigables para facilitar su uso:

| Ánodo común | Cátodo común |
|-------------|--------------|
|      A      |      C       |
|    ANODO    |      K       |
|    ANODE    |    CATODO    |
|             |   CATHODE    |

### Método `attach()` ###

Este método permite asignar el número de pines usados por el _display_, en orden desde el **segmento A** hasta el **segmento DP**.

```
mi7S.attach(pin_segmento_a, pin_segmento_b, pin_segmento_c, pin_segmento_d, pin_segmento_e, pin_segmento_f, pin_segmento_g, pin_segmento_dp);
```

En el caso de que los pines usados sean consecutivos, se implementa una variación del método más sencilla, que permite indicar únicamente el pin del primer segmento **segmento A**, y el pin del último segmento **segmento DP**.

```
mi7S.attach(pin_segmento_a, pin_segmento_dp);
```

## Uso del objeto ##

El objeto `SindormirSevenSegments` permite los siguientes métodos de uso:

-   `lampTest()`: Enciende todos los segmentos.
-   `clear()`: Apaga todos los segmentos.
-   `setDot()`: Enciende el segmento DP.
-   `clearDot()`: Apaga el segmento DP.
-   `print()`: Muestra un número hexadecimal en el _display_.

```
void loop() {
    mi7S.lampTest();
    mi7S.clear();
    mi7S.setDot();
    mi7S.clearDot();
    mi7S.print(0);
}
```

### Método `lampTest()` ###

Este método emula el comportamiento de la clásica entrada lógica de los controladores integrados tipo `CD4511`, que permite encender todos los segmentos para comprobar su correcto funcionamiento.

No requiere ningún argumento, y mantiene este estado hasta que se limpie el _display_. El uso de otros métodos puede sobreescribir parcialmente segmentos, pero se recomienda usar el método contrario `clear()`.

```
mi7S.lampTest();
```

### Método `clear()` ###

Este método limpia el _display_, apagando todos los segmentos del mismo. Tampoco requiere ningún argumento de entrada.

```
mi7S.clear();
```

### Método `setDot()` ###

Este método permite encender el punto decimal **segmento DP**, de forma independiente y sin alterar lo mostrado en el _display_. No requiere argumentos.

```
mi7S.setDot();
```

### Método `clearDot()` ###

Este método permite apagar el punto decimal **segmento DP**, de forma independiente y sin alterar lo mostrado en el _display_. No requiere argumentos.

```
mi7S.clearDot();
```

### Método `print()` (mostrar un número) ###

Este método muestra un dato (número) a través del _display_. Este dato se le pasa al método como argumento. Permite poder usar tanto valores numéricos como los caracteres asociados. Este método está diseñado para mostrar únicamente números hexadecimales.

```
my7S.print(numero);
```

Los valores posibles de entrada son:
-   Números del `0` al `15`.  `my7S.print(3);`.
-   Caracteres del `'0'` a `'9'`. `my7S.print('3');`.
-   Caracteres de la `'a'` hasta la `'f'`, sin sensibilidad a mayúsculas. `my7S.print('e');` o `my7S.print('E');`.
-   Número `-1` como forma alternativa de limpiar el _display_ (a excepción del punto decimal **segmento DP**). `my7S.print(-1);`

> Nota: Usar como parámetro `A`-`F` (caracter sin comillas) no es admitido, aunque pueda funcionar en el caso `A`.
