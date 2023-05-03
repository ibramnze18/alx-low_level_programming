#include "lists.h"

/**
 * listint_len - Function that returns the number of elements in a linked lists
 * @h: head node
 *
 * Return: Number of all nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}

	return (n);
}
