#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memoty for an array using malloc
 * @nmemb: number of elements in teha arry
 * @size: size of elemts in teh aray
 * Return: void pointer to allocateed memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		p[i] = 0;
	return (p);
}