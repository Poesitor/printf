#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

/**
 * print_percent - prints the percent symbol
 *
 * @args: the list of arguments passed to _printf
 * @count: char count
 *
 * Return: void
 */
void print_percent(__attribute__((unused)) va_list args, int *count)
{
	_putchar('%');
	(*count)++;
}

/**
 * print_char - prints the char argument at the specified position
 *
 * @args: the list of arguments passed to _printf
 * @count: a pointer to the count of characters printed by _printf
 *
 * Return: void
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
 * @count: char count
 *
 * Return: void
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
