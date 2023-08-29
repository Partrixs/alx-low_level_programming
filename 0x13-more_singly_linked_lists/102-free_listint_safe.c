#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in linked list
 *
 * Return: number of elements in freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t ln = 0;
	int new;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		new = *h - (*h)->next;
		if (new > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			ln++;
		}
		else
		{
			free(*h);
			*h = NULL;
			ln++;
			break;
		}
	}

	*h = NULL;

	return (ln);
}
