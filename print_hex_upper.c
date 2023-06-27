#include "main.h"
/**
 * print_hex_upper - to print unsigned hexadecimal integers in uppercase
 * @args: the parameters from variadic func
 *
 * Return: number of printed characters
 */

int print_hex_upper(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	int counter, digits, i;
	unsigned int temp = num;
	const char hexChars[] = "0123456789ABCDEF";
	char *str;

	digits = 0;
	counter = 0;
	if (num == 0)
	{
		counter += write(1, "0", 1);
		return (counter);
	}
	while (temp != 0)
	{
		temp /= 16;
		digits++;
	}

	str = malloc(sizeof(char) * (digits + 1));
	if (str == NULL)
		return (-1);
	for (i = digits - 1; i >= 0; i--)
	{
		str[i] = hexChars[num % 16];
		num /= 16;
	}
	counter += write(1, str, digits);
	free(str);
	return (counter);
}
