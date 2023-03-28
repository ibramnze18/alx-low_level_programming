#include "main.h"

/**
 * swap_int - Function to swap two pointer int
 * @a: first int
 * @b: secont int
 * Return: Always 0 (Success)
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
