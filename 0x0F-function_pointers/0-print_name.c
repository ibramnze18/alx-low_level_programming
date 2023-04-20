#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - Function to print name using pointer to function
 * @name: string to print
 * @f: pointer to function
 * Return: Always 0 (Success)
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
