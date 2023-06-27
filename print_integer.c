#include "main.h"
/**
 * print_integer - to print integers
 * @args: the parameters from variadic fun
 *
 * Return: number of chars
 */
int print_integer(va_list args)
{
	int i = 0;
	int counter = 0;
	int number;
	int my_arr[10];
	char x[1];

	number = va_arg(args, int);
	if (number < 0)
	{
		counter += write(1, "-", 1);
		number = -number;
	}

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
		counter = counter + write(1, x, 1);
	}
	return (counter);
}
