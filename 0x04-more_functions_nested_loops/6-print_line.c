#include "main.h"

/**
 * print_line - Function to print a line based on n parameter
 * @n: Number of lines to print
 * Return: Always 0 (Success)
 */
void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (n < 0 || n == 0)
			_putchar('\n');
		_putchar('_');
	}
	_putchar('\n');
}
