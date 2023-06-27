#include "main.h"

/**
 * print_unknown - prints the unknown format specifier
 * @args: the parameters from variadic func
 *
 * Return: number of printed characters
 */

int print_unknown(va_list args)
{
	int counter;
	char *s;
	(void)args;

	str = "%r";

	counter = write(1, str, 2);

	return (counter);
}
