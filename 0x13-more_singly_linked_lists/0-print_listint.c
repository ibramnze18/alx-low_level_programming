#include "lists.h"

/**
 * print_listint - Function that prints all the elements of a linked list
 * @h: Head pointer
 *
 * Return: Number of all nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t numberOfSize = 0;

	while (h)
	{
		printf("%d\n", h->n);
		numberOfSize++;
		h = h->next;
	}

	return (numberOfSize);
}
