#include "main.h"

/**
 * main - Entry point
 * print_alphabet Function to print alphabets a-z
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	void print_alphabet(void)
	{
		char ch;

		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
	}
	_putchar('\n');
	return (0);
}
