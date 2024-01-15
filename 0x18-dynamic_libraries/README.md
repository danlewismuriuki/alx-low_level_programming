# 0x18-dynamic_libraries

This directory contains programs and examples related to dynamic libraries in the context of low-level programming.

## Description

Dynamic libraries, or shared libraries, are compiled object code that can be loaded and linked at run time. This repository includes examples and programs that demonstrate the creation, usage, and manipulation of dynamic libraries in the C programming language.

## List of Files

- `libdynamic.so`: Shared library created for demonstration purposes.
- `0-memset.c`: Sample program using a custom dynamic library for `memset` functionality.
- `1-memcpy.c`: Sample program using a custom dynamic library for `memcpy` functionality.
- `len`: Sample program dynamically linked with `libdynamic.so`.

## Compilation Instructions

To compile the provided programs, you can use the following commands:

```bash
$ gcc -Wall -pedantic -Werror -Wextra -fPIC -c *.c
$ gcc -shared -o libdynamic.so *.o
$ gcc -o len 0-main.c -L. -ldynamic

