#include <stdio.h>
/**
 * main - Entry point
 * Description: 'code print alphabet except q and e'
 * Return: Always 0 (Success)
*/
int main(void)
{ char ch;
	for (ch = 'a'; ch <= 'z' ; ch++)
	
	{ if (ch != 'e' && ch != 'q')
		{putchar(ch);
		}
		else
		{
		}
	}
putchar('\n');
return (0);
}
