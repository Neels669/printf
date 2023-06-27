#include "main.h"
#include <stdint.h>

/**
 * print_address - prints the address in hexadecimal form
 * @args: the parameters from variadic func
 *
 * Return: number of printed characters
 */

int print_address(va_list args)
{
	uintptr_t addr = (uintptr_t)va_arg(args, void *);
	int counter, digits, i;
	uintptr_t temp = addr;
	char *str;
	const char hexChars[] = "0123456789abcdef";

	counter = 0;
	digits = 0;
	if (addr == 0)
	{
		counter += write(1, "(nil)", 5);
		return (counter);
	}
	while (temp != 0)
	{
		temp /= 16;
		digits++;
	}
	str = malloc(sizeof(char) * (digits + 3));
	if (str == NULL)
		return (-1);
	str[0] = '0';
	str[1] = 'x';

	for (i = digits + 1; i >= 2; i--)
	{
		str[i] = hexChars[addr % 16];
		addr /= 16;
	}
	counter += write(1, str, digits + 2);
	free(str);

	return (counter);
}
