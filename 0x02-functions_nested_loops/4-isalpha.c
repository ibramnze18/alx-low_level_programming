#include "main.h"

/**
 * _isalpha - Function to check if character is upper or lower
 *@c: character to check
 * Return: Always 0 (Success)
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
