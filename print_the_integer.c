#include <stdio.h>
#include "main.h"

/**
 * print_numbers - prints a number
 * @args: list of arguments
 *
 * Return: printed numbers
 */

int print_numbers(va_list args)
{
	int s;
	int num, length;

	num = va_arg(args, int);

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
 * @args: list or arguments
 *
 * Return: printed numbers
 */

int print_unsigned_numbers(va_list args)
{
	unsigned int num = va_arg(args, int);
	int length = 0;

	if (num > 0)
	{
		write_char('0' + (num % 10));
		length++;
		num /= 10;
	}
	return (length);
}
