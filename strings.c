#include "main.h"

/**
 * _percent - Function to handle the percent
 * @args: arguments passed
 * Return: (1) success
 */
int _percent(__attribute__((unused)) va_list args)
{
	_putchar('%');
	return (1);
}

/**
 * _char - Function to handle character
 * @args: arguments passed
 * Return: (1) success
 */
int _char(va_list args)
{
	char output;

	output = va_arg(args, int);
	_putchar(output);
	return (1);
}

/**
 * _string - Function to handle strings
 * @args: arguments passed
 * Return: string
 */
int _string(va_list args)
{
	int len;
	const char *str;

	str = va_arg(args, const char *);
	if (str == NULL)
		str = ""(null)";
	for (len = 0; str[len] != '\0'; len++)
		_putchar(str[len]);
	return (len);
}
