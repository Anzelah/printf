#include "main.h"
/**
 * print_numbers - prints a number
 * @format: list of arguments
 *
 * Return: printed numbers
 */
int print_numbers(const char *format, ...)
{
	va_list args;
	int value = 0, dev = 1, count, digit;

	va_start(args, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'd' || *format == 'i')
			{
				count = va_arg(args, int);
		if (count < 0)
		{
			write_char('-');
			value++;
			count = -count;
		}
		while ((count / dev) > 9)
		{
			dev *= 10;
		}
		while (dev > 0)
		{
		digit = (count / dev);
		write_char('0' + digit);
		value++;
		count %= dev;
		dev /= 10;
		}
			}
			else
			{
		write_char('%');
		write_char(*format);
		value += 2;
			}
		}
		else
		{
		write_char(*format);
		value++;
		}
		format++;
	}
	va_end(args);
	return (value);
}
