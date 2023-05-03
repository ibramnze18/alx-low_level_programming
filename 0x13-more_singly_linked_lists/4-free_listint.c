#include "lists.h"
/**
 * free_listint - Function to free listint_t list.
 * @head: Head pointer to the first node
 * Return: Void.
 */
void free_listint(listint_t *head)
{
	listint_t *p;

	while (head != NULL)
	{
		p = head;
		head = head->next;
		free(p);
	}
}
