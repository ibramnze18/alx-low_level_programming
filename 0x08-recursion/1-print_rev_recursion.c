#include <main.h>

/**
 * _print_rev_recursion - Prints strings in reverse order
 * @s: The string to reverse
 * Return: On success 1
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(s);
	}
}
