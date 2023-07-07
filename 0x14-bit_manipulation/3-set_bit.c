#include "main.h"

/**
 * set_bit - A function dat sets d value of a bit to 1 given an index.
 * @n: Number to be changed
 * @index: Bit index
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
