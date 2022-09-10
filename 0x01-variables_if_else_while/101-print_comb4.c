#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 * Description: 'code prints three diff num comb'
 * Return: Always 0 (Success)
 */
int main(void)
{int num, num1, num2;
for (num = '0'; num <= '7'; num++)
{
	for (num1 = '1'; num1 <= '8'; num1++)
	{
		for (num2 = '2'; num2 <= '9'; num2++)
		{
			if (num < num1 && num1 < num2)
			{
				putchar(num);
				putchar(num1);
				putchar(num2);
			if (num != '7')
			{
				putchar(',');
				putchar(' ');
			}
			}
		}
	}
}
putchar('\n');
return (0);
}
