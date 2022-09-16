#include "main.h"

/**
 *_isdigit - test 0-9
 *@c: character to be tested
 *Return: 0 if c is digit, 1 otherwise
 */

int _isdigit(int c)
{
int digit;
	for (digit = 0; digit <= 9; digit++)
	{
		if (digit == c)
		{
			return (1);
		}
		return (0);
	}
}
