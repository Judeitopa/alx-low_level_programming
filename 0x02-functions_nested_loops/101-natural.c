#include <stdio.h>
/**
 * main - prints the sum of all multiples if 3 or 5 up to 102
 * Return: Always (Success)
 */
int main(void)
{int i, z = 0;
	while (i < 1034)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			z += i;
		}
		i++;
	}
	printf("%d\n", z);
	return (0);
}
