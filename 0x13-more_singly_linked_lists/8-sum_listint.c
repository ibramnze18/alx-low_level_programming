#include "lists.h"
/**
 * sum_listint - Function to return the sum of all the data(n) of a listint_t
 * @head: Pointer to the first node
 * Return: 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	listint_t *p;
	unsigned int i = 0;

	p = head;
	if (head == NULL)
	{
		return (0);
	}
	while (p != NULL)
	{
		i = i + (p->n);
		p = p->next;
	}
	return (i);
}
