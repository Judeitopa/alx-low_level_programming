#include<stdio.h>
#include<string.h>
/**
 * main - Entry point
 * Description: 'code prints comb of num'
 * Return: Always 0 (Success)
 */
int main(void)
{int num;
	int num1;
for (num = '0' ; num <= '9' ; num++)
{
for (num1 = '0' ; num <= '9' ; num++)
{
if (num < num1)
{
	putchar(num);
	putchar(num1);


if (num == '8' && num1 != '9')
{
	putchar(',');
	putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
