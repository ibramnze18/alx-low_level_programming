#include "main.h"

/**
 * _islower - Checking if c is a lower character
 *@c: character to test for
 * Return: Always 0 (Success)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
