#include "main.h"

/**
 * _isdigit - Function that checks if the input parameter is a digit
 * @c: Character to check
 * Return: 1 if character is a digit else do otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
