#include "main.h"
#include <stdio.h>

/**
 ** print_binary - prints an unsigned integer in binary
 ** @args: the parameters for variadic function
 **
 ** Return: the number of characters printed
 **/
int print_binary(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	unsigned int mask = 1 << (sizeof(unsigned int) * 8 - 1);
	int counter = 0;
	int started = 0;

	if (num == 0)
	{
		counter += write(1, "0", 1);
		return (counter);
	}

	while (mask != 0)
	{
		if ((num & mask) != 0)
		{
			counter += write(1, "1", 1);
			started = 1;
		}
		else if (started)
		{
			counter += write(1, "0", 1);
		}
		mask >>= 1;
	}

	return (counter);
}
