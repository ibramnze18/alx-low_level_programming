#include "lists.h"

/**
 * reverse_listint - Function reverses a listint_t linked list
 * @head: Headd pointer to the first node
 *
 * Return: Always 0
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}
