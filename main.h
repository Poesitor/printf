#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
typedef struct
{
	char *specifier;
	void (*print_func)(va_list args, int *count);
} format_map_t;

int _printf(const char *format, ...);
int _putchar(char c);
void print_char(va_list args, int *count);
void print_string(va_list args, int *count);
void parse(const char *, format_map_t maps[], va_list, int *);

#endif /* MAIN_H */
