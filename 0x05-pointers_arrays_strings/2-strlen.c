#include "main.h"

/**
 * _strlen - retruns the length of a string
 * @s: string
 * Return: returns length as integer
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length])
		length++;
	return (length);
}
