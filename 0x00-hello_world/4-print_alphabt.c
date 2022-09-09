#include <stdio.h>
/**
 * main - Entry Point
 * Description: 'code prints the alphabet except q and e'
 * Return: Alwasys 0 (Success)
 */
int main(void)
{char ch = 'a';
for (ch = 'a'; ch <= 'z'; ch++)
putchar(ch);
if (ch == 'q' || ch == 'e')
putchar('\0');
return (0);
}
