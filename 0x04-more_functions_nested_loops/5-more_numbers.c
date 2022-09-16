#include "main.h"

/**
 * more_numbers - function prints numbers
 * Return: (void)
 */

void more_numbers(void)
{
int n;
int i;
	for (n = 0; n <= 14; n++)
	{
		while (i < 9)
		{
			_putchar(n % 10 + '0');
			_putchar('\n');
			i++;
		}
	}
	_putchar('\n');
}
