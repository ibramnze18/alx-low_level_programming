 #include "lists.h"

/**
 * free_listint_safe - Function that frees listint_t
 * @h: Pointer to the first node
 *
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	size_t lent = 0;
	int dif;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		dif = *h - (*h)->next;
		if (dif > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			lent++;
		}
		else
		{
			free(*h);
			*h = NULL;
			lent++;
			break;
		}
	}

	*h = NULL;

	return (lent);
}
