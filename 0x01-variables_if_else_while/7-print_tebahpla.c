#include <string.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: 'code prints alphabet in reverse order'
 * Return: Always 0 (Succcess)
 */
int main(void)
{char alpha = 'z';
	for (alpha = 'z'; alpha >= 'a'; alpha--)
		putchar(alpha);
	putchar('\n');
return (0);
}
