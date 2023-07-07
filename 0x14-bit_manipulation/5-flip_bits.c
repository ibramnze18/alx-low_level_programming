#include "main.h"

/**
 * flip_bits -  a function that returns the number of bits you
 * would need to flip to get from one number to another.
 *
 * @n: number 1
 * @m: number 2
 *
 * Return: Always 0
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int km, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (km = 63; km >= 0; km--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}

	return (count);
}
