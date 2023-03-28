#include "main.h"
/**
 * puts_half - prints a string, followed by a new line,
 * @str: pointer to the string to print
 * Return: void
 */
void puts_half(char *str)
{
	int i;
	int index;
	int n;

	for (i = 0; str[i] != 0; i++)
	{
	}
	index = i - 1;
	n = (index / 2) + 1;
	for (; n <= index; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
