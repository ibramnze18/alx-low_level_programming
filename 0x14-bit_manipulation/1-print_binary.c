#include "main.h"

/**
 * print_binary - A functn dat prints the binary representation of number
 * @n: Binary number to print
 */
void print_binary(unsigned long int n)
{
	int int_n, count = 0;
	unsigned long int current;

	for (int_n = 63; int_n >= 0; int_n--)
	{
		current = n >> int_n;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
