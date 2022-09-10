#include<stdio.h>
#include<string.h>
/**
 * main - Entry Point
 * Description: 'Code prints num seperated by comma'
 * Return: Always 0 (Success)
 */
int main(void)
{ int num;
for (num = 0 ; num <= 9 ; num++)
{
	putchar(num % 10 + '0');
	if (num != 9)
{
	putchar(',');
	putchar(' ');
}
}
return (0);
}
