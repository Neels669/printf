#include "main.h"
/**
 * print_cent - to print the character %
 * @args: the variadic func
 *
 *
 * Return: the num of printed chars
 */
int print_cent(va_list args)
{
	(void)args;

	write(1, "%", 1);
	return (1);
}
