#include <stdio.h>
/**
 * main - Entry Point
 * Description: 'code print alphabet in lower and upper case'
 * Return: Always 0 (Success)
 */
int main(void)
{char low = 'a';
	char up = 'A';
for (low = 'a'; low <= 'z'; low++)
putchar(low);
for (up = 'A'; up <= 'Z'; up++)
	putchar(up);
putchar('\n');
	return (0);
}
