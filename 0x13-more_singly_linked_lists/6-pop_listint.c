#include "lists.h"
/**
 * pop_listint - Function that deletes the head node of a listint_t list
 * @head: Head pointer to the first node
 * Return: Head node's data(n).
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp1, *tmp2;
	int n;

	tmp1 = *head;
	if (tmp1 == NULL)
	{
		return (0);
	}
	tmp2 = *head;
	tmp1 = tmp1->next;
	*head = tmp1;
	n = tmp2->n;
	free(tmp2);
	return (n);
}
