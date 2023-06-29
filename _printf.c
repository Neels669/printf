#include "main.h"
/**
 * _printf - to make function printf in formating arguments
 * @format: the string will be printed
 * @...: parameters as the function which is variadic
 * Return: Number of characters which has been printed
 */
int _printf(const char * const format, ...)
{
	int i = 0;
	int counter = 0;
	int value = 0;
	va_list args;
	int (*f)(va_list);

	va_start(args, format);
	if (format == NULL)
		return (-1);
	while (format[i])
	{
		if (format[i] != '%')
		{
			value = write(1, &format[i], 1);
			counter += value;
			i++;
			continue;
		}
		if (format[i] == '%')
		{
			f = specifiers(&format[i + 1]);
			if (f != NULL)
			{
				value = f(args);
				counter += value;
				i += 2;
				continue;
			}
			if (format[i + 1] == '\0')
				break;
			if (format[i + 1] != '\0')
			{
				value = write(1, &format[i + 1], 1);
				counter += value;
				i += 2;
				continue;
			}
		}
	}
	return (counter);
}
