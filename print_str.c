#include "main.h"
/**
 * print_str - to print the full string
 * @args: the variadic func
 *
 *
 * Return: the num of printed chars
 */
int print_str(va_list args)
{
	int i;
	int counter = 0;
	char *string;

	string = va_arg(args, char *);
	if (string == NULL)
		return (-1);

	while (string[i])
	{
		counter = write(1, &string[i], 1);
		i += 1;
	}
	return (counter);
}
