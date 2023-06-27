#include "main.h"

/**
 * print_length - prints the length value
 * @args: the parameters from variadic func
 *
 * Return: number of printed characters
 */

int print_length(va_list args)
{
	int len = va_arg(args, int);
	int counter, digits, i;
	int temp = len;
	char *str;

	counter = 0;
	digits = 0;
	if (len < 0)
	{
		counter += write(1, "-", 1);
		len = -len;
	}
	else if (len == 0)
	{
		counter += write(1, "0", 1);
		return (counter);
	}
	while (temp != 0)
	{
		temp /= 10;
		digits++;
	}

	str = malloc(sizeof(char) * (digits + 1));
	if (str == NULL)
		return (-1);
	for (i = digits - 1; i >= 0; i--)
	{
		str[i] = '0' + (len % 10);
		len /= 10;
	}
	counter += write(1, str, digits);
	free(str);

	return (counter);
}
