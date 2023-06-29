#include "main.h"
#include <stdio.h>

/**
 ** print_ascii - prints the ASCII value of a character
 ** @args: the parameters for variadic function
 **
 ** Return: the number of characters printed
 **/
int print_ascii(va_list args)
{
	char ch = va_arg(args, int);
	int counter = 0;

	counter += printf("%d", ch);

	return (counter);
}
