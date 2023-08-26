#include "main.h"

/**
 * parse - processes the format string and prints the character or
 * invokes the appropriate function
 *
 * @format: the format string to process
 * @maps: the map of a specifier character to the approproate function
 * @args: the va_list containing the variable arguments
 * @count: a pointer to the count of characters printed
 */
void parse(const char *format, format_map_t maps[], va_list args, int *count)
{
	int j;
	int i = 0;

	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			(*count)++;
		}
		else
		{
			i++;
			j = 0;
			while (maps[j].specifier != NULL)
			{
				if (format[i] == *maps[j].specifier)
				{
					maps[j].print_func(args, count);
					break;
				}
				j++;
			}
		}
		i++;
	}
}
