#include <stdio.h>
#include "main.h"

/**
 * print_line - prints a straight line
 * @n: parameter
 * Return: (void)
 */

void print_line(int n)
{
	while (n-- > 0)
	{
		_putchar('-');
	}
	_putchar('\n');
}
