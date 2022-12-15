#include "main.h"

/**
 * _islower - checks if a character is lowercase
 * @c: ther character
 * Return : 1 if chracter is lower, 0 if not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
