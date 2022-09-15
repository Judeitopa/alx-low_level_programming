#include "main.h"
#include <ctype.h>

/**
 * _isupper - This function checks for uppercase
 * @c: character to be tested
 * Return: 1 (if c is uppercase) 0 otherwise
 */

int _isupper(int c)
{
static char ch;
	for (ch = 'A'; ch <= 'Z'; ch++)
{
	if (c == ch)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
