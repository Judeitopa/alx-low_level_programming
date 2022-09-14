#include <stdio.h>
#include <string.h>
/**
 * print_alphabet - Entry point
 * Description: 'function prints the alphabet'
 * Return: void
 */
int main(void)
{
char letter = 'a';
	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
}
