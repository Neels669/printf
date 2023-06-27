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
	int counter = 0;
	char *string;

	string = va_arg(args, char *);

	if (string == NULL)
		return (-1);

	while (*string)
	{
		counter = write(1, string, 1);
		string++;
	}
	return (counter);
}
