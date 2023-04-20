#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - Prints each array element
 * @array: array
 * @size: number of elements to print
 * @action: Pointer to print in regular or hex
 * Return: Always 0 (Success)
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
