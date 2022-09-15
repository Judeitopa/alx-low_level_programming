#include "main.h"
/**
 * main - Entry point
*largest_number - returns the largest of 3 numbers
*a: first integer
*b: second integer
*c: third integer
*Return: largest number
*@int: Return type
*/
int largest_number(int, int, int);
int main(void)
{
int largest;
int a;
int b;
int c;
	if (a > b && b)
	{
		largest = a;
	}
	else if (b > a && a > c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}
	return (largest);
}
