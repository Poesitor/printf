#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
typedef struct
{
	char *specifier;
	void (*print_func)(va_list args, int *count);
} format_map_t;

int _printf(const char *format, ...);
int _putchar(char c);

#endif /* MAIN_H */
