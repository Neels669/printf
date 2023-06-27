#include "main.h"

/**
 * print_decimal - prints a given integer in decimal
 * @args: the parameters for variadic
 *
 * Return: the number of characters that printed
 */
int print_decimal(va_list args)
{
	int i = 0;
	int counter = 0;
	int number;
	int my_arr[10];
	char x[1];

	number = va_arg(args, int);

	while (number != 0)
	{
		my_arr[i] = (number % 10);
		number /= 10;
		if (number == 0)
		{
			break;
		}
		else
			i++;
	}

	for (; i >= 0; i--)
	{
		x[0] = ('0' + my_arr[i]);
		counter += write(1, x, 1);
	}
	return (counter);
}
