#include "main.h"
/**
* print_rev - prints a string, followed by a new line
* @s: pointer to the string to print
* Return: void
*/
void print_rev(char *s)
{
	int i;
	int index;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	index = i - 1;
	for (; index >= 0; index--)
	{
		_putchar(s[index]);
	}
	_putchar('\n');
}
