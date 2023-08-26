#include <limits.h>
#include <stdio.h>

#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	char ch = 'A';
	char *str = "Hello, World!";
	char *null_str = NULL;
	char special_ch = '\t';
	char newline_ch = '\n';

	/* Test for %c and %s format specifier */
	_printf("Character:[%c]\n", ch);
	printf("Character:[%c]\n", ch);

	_printf("String:[%s]\n", str);
	printf("String:[%s]\n", str);

	_printf("Percent sign: [%%]\n");
	printf("Percent sign: [%%]\n");

	printf("Null String: [%s]\n", null_str);

	_printf("Special Character: [%c]\n", special_ch);
	printf("Special Character: [%c]\n", special_ch);

	_printf("Newline Character: [%c]\n", newline_ch);
	printf("Newline Character: [%c]\n", newline_ch);

	return (0);
}
