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
	int len;
	int len2;

	len = _printf("let's try to printf a simple sentence.\n");
	len2 = printf("let's try to printf a simple sentence.\n");
	printf("Length: [%d, %i]\n", len, len2);

	/* Test for %c and %s format specifier */
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');

	return (0);
}
