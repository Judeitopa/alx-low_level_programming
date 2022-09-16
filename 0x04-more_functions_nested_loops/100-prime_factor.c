#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * print_number - prints a number
 * @n: The number to print
 * Return: return 0
 */

int main(void)
{
long number = 612852475143;
int inc;
	
	while (inc++ < number / 2)
	{
		if (number % inc == 0)
		{
			number /= 2;
			continue;
		}
		for (inc = 3; inc < number / 2; inc += 2)
		{
			if (number % inc == 0)
				number /= inc;
		}
	}
	printf("%d", inc);
	return (0);
}
