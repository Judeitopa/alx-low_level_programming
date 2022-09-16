#include <stdio.h>
#include "main.h"

/**
 * main - program that prints either number
 * or fizz or buzz or fizzBuzz
 *
 * Return: returns 0
 */

int main(void)
{
	int a = 0, b = 0, c = 0;

	for (a = 1; a < 101; a++)
	{
		b = a % 3;
		c = a % 5;
		if (b == 0 && c == 0)
			printf("FizzBuzz");
		else if (c == 0 && b != 0)
			printf("Buzz");
		else if (b == 0 && c != 0)
			printf("Fizz");
		else
			printf("%d", a);
		if (a < 100)
			putchar(' ');
	}
	putchar('\n');
	return (0);
}
