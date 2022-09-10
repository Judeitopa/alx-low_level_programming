#include<stdio.h>
/**
* main -Entry point
* Description: 'code print base 16'
* Return: Always 0 (Success)
*/
int main(void)
{ int main;
	char alpha;
for (num = 0 ; num <= 9 ; num++)
{
	putchar(num % 10 + '0');
}
for (alpha = 'a' ; alpha <= 'f' ; alpha++)
{
	putchar(alpha);
}
	putchar('\n');
return (0);
}
