#include "main.h"

/**
 * largest_number - Prints the largest number
 * @a: integer 1
 * @b: integer 2
 * @c: integer 3
 * Return: the largest number
 */
int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && a >= c)
	{
		largest = a;
	}
	else if (b >= a && b >= c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}
	return (largest);
}
