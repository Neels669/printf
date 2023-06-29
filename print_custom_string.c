#include "main.h"
#include <stdio.h>

/**
 ** print_custom_string - prints a string with special formatting for non-printable characters
 ** @args: the parameters for variadic function
 **
 ** Return: the number of characters printed
 **/
int print_custom_string(va_list args)
{
	char *str = va_arg(args, char *);
	int counter = 0;

	if (str == NULL)
	{
		counter += write(1, "(null)", 6);
		return (counter);
	}

	while (*str)
	{
		if (*str < 32 || *str >= 127)
		{
			counter += write(1, "\\x", 2);
			counter += printf("%02X", (unsigned char)*str);
		}
		else
		{
			counter += write(1, str, 1);
		}
		str++;
	}

	return (counter);
}
