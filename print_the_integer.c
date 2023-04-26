#include "main.h"
/**
 * print_numbers - prints a number
 * @ap: argument list
 *
 * Return: printed numbers
 */

int print_numbers(va_list ap)
{
	int s;
	int num, length;

	num = va_arg(ap, int);

	if (num < 0) /* checks if interger is negative */
	{
		write_char('-');
		s = -num;
	}
	else
	{
		s = num;
	}
	length = 0;

	while (s > 0)
	{
		write_char('0' + (s % 10));
		length++;
		s /= 10;
	}
	return (length);
}

/**
 * print_unsigned_numbers - print only the positive numbers
 * @s: first argument
 *
 * Return: printed numbers
 */

int print_unsigned_numbers(unsigned int s)
{
	int length = 0;

	if (s >= 10)
	{
		length += print_unsigned_numbers(s / 10);
	}
	length += write_char(s % 10 + '0');

	return (length);
}
