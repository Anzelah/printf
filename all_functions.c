#include "main.h"

/**
 * print_char - prints a character
 * @list: argument list
 *
 * Return: the character printed represented by 1
 * this is the valid value since one character is always printed
 */

int print_char(va_list list)
{
	write_char(va_arg(list, int));

	return (1);
}

/**
 * print_string - print a string
 * @list: argument list
 *
 * Return: the printed string
 */

int print_string(va_list list)
{
	char *str;
	int i;

	str = va_arg(list, char *);

	if (str == NULL)
		return (-1);

	for (i = 0; str[i] != '\0'; i++)
	{
		write_char(str[i]);
	}
	return (i);
}

/**
 * print_integer - print the numbers
 * @list: argument list
 *
 * Return: the numbers printed
 */

int print_integer(va_list list)
{
	int length;

	length = print_numbers(list);


	return (length);
}

/**
 * print_unsigned_integer - prints only positive numbers
 * @list: argument list
 *
 * Return: printed integers
 */

int print_unsigned_integer(va_list list)
{
	int length, num;

	num = va_arg(list, int);

	length = print_unsigned_numbers(num);

	return (length);
}

/**
 * print_percentage - prints the format handler
 * @list: argument list
 *
 * Return: characters printed which is 1
 */

int print_percentage(__attribute__((unused))va_list list)
{
	write_char('%' + 0);

	return (2);
}
