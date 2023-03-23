#include "main.h"

/**
 * more_numbers - Function to print 0 - 14 10x
 * Return: Always 0 (Success)
 */
void more_numbers(void)
{
	int i;
	int num;

	for (i = 1; i <= 10; i++)
	{
		for (num = 0; num < 15; num++)
		{
			if (num >= 10)
				_putchar('1');
			_putchar (num % 10 + '0');
		}

		_putchar('\n');
	}
}
