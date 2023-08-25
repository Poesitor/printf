#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

/**
 * print_char - prints the char argument at the specified position
 *
 * @args: the list of arguments passed to _printf
 */
void print_char(va_list args, int *count)
{
	_putchar(va_arg(args, int));
	(*count)++;
}

/**
 * print_string - prints the string argument at the specified position
 *
 * @args: list of arguments passed to _printf
 */
void print_string(va_list args, int *count)
{
	char *str;
	int i = 0;

	str = va_arg(args, char *);
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		(*count)++;
		i++;
	}
}

/**
 * print_percent - prints a percent symbol at the specified position
 *
 * @args: list of arguments
 *
 * Return: Void
 */
void print_percent(__attribute__((unused))va_list args, __attribute__((unused))int *count)
{
	_putchar('%');
}
