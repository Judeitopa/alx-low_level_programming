#include "main.h"

/**
 * _strchr - function locates char in a string
 * @s: string
 * @c: character
 * Return: pointer to sopt in s with c or null
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}
	if (*(s + i) == c)
		return (s + i);
	return (0);
}
