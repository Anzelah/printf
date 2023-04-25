#include "main.h"

/**
 * _printf - print anything
 * @format: pointer to functions
 *
 * Return: printed characters
 */

int _printf(const char *format, ...)
{
	int printed;

	print f_arr[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percentage},
		{"i", print_unsigned_integer},
		{NULL, NULL},
	};

	va_list(arg_list);

	va_start(arg_list, format);

	if (format == NULL)
	{
		return (-1);
	}

	printed = get_func(format, f_arr, arg_list);

	va_end(arg_list);

	return (printed);
}
