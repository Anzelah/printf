#include "main.h"

/**
  *write_char- To print a single character to stdout.
  *@c:Character to print.
  *
  *Return: 1(success)
  */

int write_char(char c)
{
	write(1, &c, 1);

	return (1);
}
