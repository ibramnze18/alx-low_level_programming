#include "lists.h"
/**
 * free_listint2 -Function to free a listint_t list
 * @head: Head pointer to the first node
 * Return: Always 0.
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp, *tmp_2;

	if (head == NULL)
	{
		return;
	}
	tmp_2 = *head;
	while (tmp_2 != NULL)
	{
		tmp = tmp_2;
		tmp_2 = tmp_2->next;
		free(tmp);
	}
	*head = NULL;
}
