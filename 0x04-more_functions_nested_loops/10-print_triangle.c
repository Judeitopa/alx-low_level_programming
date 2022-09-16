#include <stdio.h>
#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size:size parameter of triangle
 * Return: returns nothing
 */

void print_triangle(int size)
{
	int par1, par2, space, output;

	for (par1 = 1; par1 <= size; par1++)
	{
		space = size - par1;
		output = size - space;

		for (par2 = 1; par2 <= space; par2++)
		{
			_putchar(' ');
		}
		for (par2 = 1; par2 <= output; par2++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
