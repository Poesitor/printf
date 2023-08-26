#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

/**
 * _printf - produces output according to a format
 *
 * @format: format for the string
 * @...: the variable arguments
 *
 * Return: Number of characters printed
 * (excluding the null byte used to end output to strings)
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	format_map_t format_maps[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{NULL, NULL}
	};

	if (format == NULL)
		return (-1);

	va_start(args, format);

	parse(format, format_maps, args, &count);

	va_end(args);

	return (count);
}
