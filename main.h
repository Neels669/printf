#ifndef PRINTF
#define PRINTF

#include <stdio.h>
#include <limits.h>
#include <stlib.h>
#include <stdarg.h>
#include <stdint.h>

int _printf(const char *format, ...);
int _putchar(char c);
int _char(va_list args);
int _string(va_list args);
int _percent(va_list);

#endif
