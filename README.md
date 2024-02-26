# Proyecto FT_PRINTF


## Introducción


El proyecto `ft_printf` es parte del plan de estudios de 42 escuelas, que desafía a los estudiantes a reimplementar la función `printf` de la biblioteca estándar C. Este proyecto ayuda a comprender la versátil función printf que se usa ampliamente en la programación en C para formatear la salida. Al recrear `printf`, los estudiantes obtienen una comprensión profunda de los argumentos variables, el formato y cómo implementar una función que puede manejar múltiples tipos de datos y opciones de formato.


## Objetivo


El objetivo principal del proyecto `ft_printf` es recrear la función `printf` de la biblioteca estándar de C. La función recreada, `ft_printf`, debe imitar el comportamiento del `printf` original lo más fielmente posible. Esto incluye el manejo de varios especificadores de formato para imprimir diferentes tipos de datos (`d`, `i`, `u`, `x`, `X`, `c`, `s`, `p`, `%`), banderas , ancho y precisión.


## Tecnologías y lenguajes utilizados


- **Idioma:** C
- **Conceptos clave:** Argumentos variables, formato de cadenas, gestión de resultados
- **Compilación:** Makefile para compilar la biblioteca y probar


## Características


- Admite la impresión de varios tipos de datos, incluidos números enteros, enteros sin signo, caracteres, cadenas, punteros y valores hexadecimales.
- Maneja opciones de formato complejas como ancho de campo, precisión, banderas y modificadores de longitud.
- Imita el comportamiento original de `printf` en términos de valores de retorno y manejo de errores.
- Estructura de código modular para fácil mantenimiento y actualizaciones.


## Uso


1. **Compilación**: Compile `ft_printf` ejecutando `make` en la raíz del directorio del proyecto. Esto generará un archivo de biblioteca `libftprintf.a`.
2. **Integración**: incluya el archivo de encabezado `ft_printf.h` en sus archivos C y use `ft_printf` como usaría el `printf` estándar.
3. **Ejemplo**: Aquí hay un ejemplo simple del uso de `ft_printf`:


```c
#incluir "ft_printf.h"


int principal (vacío)
{
    ft_printf("¡Hola, %s!\n", "mundo");
    ft_printf("Hexadecimal para %d es %x.\n", 42, 42);
    devolver (0);
}
```
## Instalación
Para comenzar a usar ft_printf en tus proyectos, sigue estos pasos:# Proyecto FT_PRINTF


## Introducción


El proyecto `ft_printf` es parte del plan de estudios de 42 escuelas, que desafía a los estudiantes a reimplementar la función `printf` de la biblioteca estándar C. Este proyecto ayuda a comprender la versátil función printf que se usa ampliamente en la programación en C para formatear la salida. Al recrear `printf`, los estudiantes obtienen una comprensión profunda de los argumentos variables, el formato y cómo implementar una función que puede manejar múltiples tipos de datos y opciones de formato.


## Objetivo


El objetivo principal del proyecto `ft_printf` es recrear la función `printf` de la biblioteca estándar de C. La función recreada, `ft_printf`, debe imitar el comportamiento del `printf` original lo más fielmente posible. Esto incluye el manejo de varios especificadores de formato para imprimir diferentes tipos de datos (`d`, `i`, `u`, `x`, `X`, `c`, `s`, `p`, `%`), banderas , ancho y precisión.


## Tecnologías y lenguajes utilizados


- **Idioma:** C
- **Conceptos clave:** Argumentos variables, formato de cadenas, gestión de resultados
- **Compilación:** Makefile para compilar la biblioteca y probar


## Características


- Admite la impresión de varios tipos de datos, incluidos números enteros, enteros sin signo, caracteres, cadenas, punteros y valores hexadecimales.
- Maneja opciones de formato complejas como ancho de campo, precisión, banderas y modificadores de longitud.
- Imita el comportamiento original de `printf` en términos de valores de retorno y manejo de errores.
- Estructura de código modular para fácil mantenimiento y actualizaciones.


## Uso


1. **Compilación**: Compile `ft_printf` ejecutando `make` en la raíz del directorio del proyecto. Esto generará un archivo de biblioteca `libftprintf.a`.
2. **Integración**: incluya el archivo de encabezado `ft_printf.h` en sus archivos C y use `ft_printf` como usaría el `printf` estándar.
3. **Ejemplo**: Aquí hay un ejemplo simple del uso de `ft_printf`:


```c
#incluir "ft_printf.h"


int principal (vacío)
{
    ft_printf("¡Hola, %s!\n", "mundo");
    ft_printf("Hexadecimal para %d es %x.\n", 42, 42);
    devolver (0);
}
```
## Instalación
Para comenzar a usar ft_printf en tus proyectos, sigue estos pasos:   
```c
git clone https://github.com/yourusername/ft_printf.git
cd ft_printf
make
```
