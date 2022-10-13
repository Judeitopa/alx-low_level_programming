#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - pritns strings, followed by a new ling
 * @separator: separator to print between the strings
 * @n: number of strings to print
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list valist;

	va_start(vakust, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(valist, char *);
		if (str)
			printf("%s", str);
		else
			if (i < n - 1 && separator)
				printf("%s", separator);
	}
	printf("\n");
	va_end(valist);
}
