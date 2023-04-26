#include <stdio.h>
#include "main.h"

/**
 * write_char - print character to standard output
 * @c: argument
 *
 * Return: 1 on success
 */

int write_char(char c)
{
	write(1, &c, 1);

	return (1);
}
