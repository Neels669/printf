#include "main.h"
/**
 * print_char - to print characters
 * @args: the variadic func
 *
 *
 * Return: the num of printed chars
 */
int print_char(va_list args)
{
	char c = (char)va_arg(args, int);
	int counter = 0;

	if (c)
	{
		counter = write(1, &c, 1);
		return (counter);
	}
	return (0);
}
