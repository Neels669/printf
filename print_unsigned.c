#include "main.h"

/**
 * print_unsigned - To print unsigned integers
 * @args: the parameters from variadic function
 *
 * Return: number of printed characters
 */

int print_unsigned(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	int counter, digits, i;
	unsigned int temp = num;
	char *str;

	counter = 0;
	digits = 0;
	if (num == 0)
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
		str[i] = (num % 10) + '0';
		num /= 10;
	}

	counter += write(1, str, digits);
	free(str);

	return (counter);
}
