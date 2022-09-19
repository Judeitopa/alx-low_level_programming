#include <stdio.h>
#include "main.h"

/**
 * _puts - prints a string
 * @str: string to print
 *
 * Description: prints a string
 * Return: no error on success
 */

void _puts(char *str)
{
int c;
	while (str[c] != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
