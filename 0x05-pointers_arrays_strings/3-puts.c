#include "main.h"

/**
 * _puts - Function that prints a string followed by a newline
 * @str: String to print
 * Return: Always 0 (Success)
 */
void _puts(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
