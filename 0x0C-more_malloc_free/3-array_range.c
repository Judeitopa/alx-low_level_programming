#include "main.h"
#include <stdlib.h>

/**
 *array_range - creates a range of arrays
 *@min: firs num
 *@max: last num
 *Return: pointer to newly alloc mrmory of NULL if false
 */

int *array_range(int min, int max)
{
	int i, l;
	int *a;

	if (min > max)
		return (NULL);
	l = max - min + 1;
	a = malloc(sizeof(int) * l);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < l; i++, min++)
	{
		a[i] = min;
	}
	return (a);
}
