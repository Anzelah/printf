#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * struct print - data structures containing functions
 *
 * @my_printf: contains format specifiers
 * @f: function associated
 */

typedef struct print
{
	char *my_printf;
	int (*f)(va_list list);

} print;


/* functions */
int write_char(char c);
int _printf(const char *format, ...);
int print_numbers(const char *format, ...);
int print_unsigned_numbers(va_list args);
int print_char(va_list list);
int print_string(va_list list);
int get_func(const char *format, print f_arr[], va_list arg_list);
int print_unsigned_integer(va_list list);
int print_integer(const char *format, ...);
int print_percentage(va_list list);

#endif /* MAIN_H */
