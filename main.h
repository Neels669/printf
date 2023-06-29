#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <stddef.h>
int _printf(const char *format, ...);
int (*specifiers(const char *format))(va_list);
int print_char(va_list);
int print_str(va_list);
int print_cent(va_list);
int print_integer(va_list);
int print_decimal(va_list);
int print_unsigned(va_list args);
int print_hex(va_list args);
int print_hex_upper(va_list args);
int print_address(va_list args);
int print_length(va_list args);
int print_unknown(va_list args);
int print_octal(va_list args);
int print_binary(va_list args);
int print_custom_string(va_list args);
int print_ascii(va_list args);
/**
 * struct fun - specifiers to pointer
 * @t: char to comare it
 * @f: function to print
 */
typedef struct fun
{
	char *t;
	int (*f)(va_list);
} fun_t;

#endif
