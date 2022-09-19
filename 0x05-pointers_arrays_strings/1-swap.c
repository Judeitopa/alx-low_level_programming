#include "main.h"

/**
 * swap_int - swaps two integer values
 * @a: first integer
 * @b: second integer
 * Return: Nothing
 */

void swp_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
