#include "lists.h"
/**
 * delete_nodeint_at_index -  function to delete node at index of a listint_t
 * @head: Head pointer to the first node
 * @index: The node index
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *temp2;
	unsigned int i = 1;

	temp = *head;
	while (temp != NULL)
	{
		if (index == 0)

		{
			temp2 = *head;
			*head = temp2->next;
			free(temp2);
			return (1);
		}
		else if (i == index)
		{
			temp2 = temp->next;
			temp->next = temp2->next;
			free(temp2);
			return (1);
		}
		temp = temp->next;
		i++;
	}
	return (-1);
}
