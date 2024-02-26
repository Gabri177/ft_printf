# FT_PRINTF Project

## Introduction

The `ft_printf` project is part of the curriculum at 42 schools, challenging students to reimplement the `printf` function from the C standard library. This project aids in understanding the versatile `printf` function widely used in C programming for output formatting. By recreating `printf`, students gain deep insights into variable arguments, formatting, and how to implement a function capable of handling multiple data types and formatting options.

## Objective

The primary objective of the `ft_printf` project is to recreate the `printf` function from the C standard library. The recreated function, `ft_printf`, should mimic the behavior of the original `printf` as closely as possible. This includes handling various format specifiers for printing different data types (`d`, `i`, `u`, `x`, `X`, `c`, `s`, `p`, `%`), flags, width, and precision.

## Technologies & Languages Used

- **Language:** C
- **Key Concepts:** Variable Arguments, String Formatting, Output Management
- **Compilation:** Makefile for compiling the library and testing

## Features

- Supports printing various data types, including integers, unsigned integers, characters, strings, pointers, and hexadecimal values.
- Handles complex formatting options such as field width, precision, flags, and length modifiers.
- Imitates the original `printf` behavior in terms of return values and error handling.
- Modular code structure for easy maintenance and updates.

## Usage

1. **Compilation**: Compile `ft_printf` by running `make` in the root of the project directory. This will generate a `libftprintf.a` library file.
2. **Integration**: Include the `ft_printf.h` header file in your C files and use `ft_printf` as you would the standard `printf`.
3. **Example**: Here is a simple example of how to use `ft_printf`:

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello, %s!\n", "world");
    ft_printf("Hexadecimal for %d is %x.\n", 42, 42);
    return (0);
}
```
## Installation
To start using ft_printf in your projects, follow these steps:    
```c
git clone https://github.com/Gabri177/ft_printf.git
cd ft_printf
make
```
