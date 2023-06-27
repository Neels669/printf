#include "main.h"
/**
 * specifiers - chaeck the specifiers
 * @format: the char*
 *
 * Return: pointer to function
 */
int (*specifiers(const char *format))(va_list)
{
	int i;

	fun_t my_arr[6] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_cent},
		{"i", print_integer},
		{"d", print_decimal},
		{NULL, NULL}};
	for (i = 0; my_arr[i].t != NULL; i++)
	{
		if (*(my_arr[i].t) == *format)
		{
			return (my_arr[i].f);
		}
	}
	return (NULL);
}
