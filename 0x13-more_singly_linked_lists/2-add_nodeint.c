#include "lists.h"
/**
 * add_nodeint - Function to add new node at the begining of a listint_t list.
 * @head: Head pointer of the linked list
 * @n: An integer to assign at the new node
 * Return: Pointer with the adress of the first node, the node created
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *p;

	if (head == NULL)
	{
		return (NULL);
	}
	p = malloc(sizeof(listint_t));
	if (p == NULL)
	{
		return (NULL);
	}
	p->n = n;
	p->next = *head;
	*head = p;
	return (p);
}
