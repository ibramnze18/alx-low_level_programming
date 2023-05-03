#include "lists.h"
/**
 * get_nodeint_at_index - Function that returns the nth node of a listint_t
 * @head: Head pointer to the first node.
 * @index: The index of the node.
 * Return: Null if the node does not exit
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *p;
	unsigned int i = 0;

	p = head;
	if (p == NULL)
	{
		return (NULL);
	}
	while (p != NULL)
	{
		if (i == index)
		{
			return (p);
		}
		p = p->next;
		i++;
	}
	return (NULL);
}
