#include <stdio.h>
#include "main.h"
/**
 * print_array -  prints n elements of an array of integers
 * @a: array with the characters of the word
 * @n: is the number of elements of the array to be printed
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	int cont;

	for (cont = 0; cont < n; cont++)
	{
		if (cont != (n - 1))
		{
			printf("%d, ", a[cont]);
		}
		else
		{
			printf("%d", a[cont]);
		}
	}
	putchar('\n');
}
