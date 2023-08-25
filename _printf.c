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
	int j;
	int i = 0;
	int count = 0;

	format_map_t format_maps[] = {
		{"c", print_char},
		{"s", print_string},
	};

	va_start(args, format);

	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			write(1, &format[i], 1);
			count++;
		}
		else
		{
			i++;
			j = 0;
			while (j < sizeof(format_maps) / sizeof(format_maps[0]))
			{
				if (format[i] == *format_maps[j].specifier)
				{
					format_maps[j].print_func(args, &count);
					break;
				}
				j++;
			}
		}
		i++;
	}

	va_end(args);

	return (count);
}
