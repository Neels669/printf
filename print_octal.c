#include "main.h"

/**
 * print_octal - prints a given integer in octal format
 * @args: the parameters for variadic function
 *
 * Return: the number of characters printed
 */

int print_octal(va_list args)
{
	unsigned int number = va_arg(args, unsigned int);
	int counter = 0;
	char octal[32];
	int i = 0;

	if (number == 0)
	{
		counter += write(1, "0", 1);
		return (counter);
	}

	while (number > 0)
	{
		octal[i] = (number % 8) + '0';
		number /= 8;
		i++;
	}
	for (i -= 1; i >= 0; i--)
	{
		counter += write(1, &octal[i], 1);
	}
	return (counter);
}
