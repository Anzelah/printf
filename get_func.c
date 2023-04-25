#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * get_func - select the necessary function
 * @format: point to inputted format string
 * @f_arr: list containing all possible functions
 * @arg_list: list containing all arguments
 *
 * Return: the printed characters
 */

int get_func(const char *format, print f_arr[], va_list arg_list)
{
	int i, j, result, printed_chars;

	printed_chars = 0;

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{	/* checks for % handler */
			for (j = 0; f_arr[j].my_printf != NULL; j++)
			{
				if (f_arr[j].my_printf[0] == format[i + 1])
				{
					result = f_arr[j].f(arg_list);

					if (result == -1)
					{
						return (-1);
					}
				printed_chars += result;
				break;
				}
			}
			if (f_arr[j].my_printf == NULL || format[i + 1] == '\0')
			{
				write_char(format[i + 1]);
				printed_chars++;
				{
					if (format[i + 1] != '\0')
					{
						write_char(format[i + 1]);
					}
					else
						return (-1);
				}
			}
			i++;

		}
		else /* if char isnt % */
		{
			write_char(format[i]);
			printed_chars++;
		}
	}
	return (printed_chars);
}
