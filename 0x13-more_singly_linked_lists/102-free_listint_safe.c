#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list.
 * @h: pointer to the head.
 * Return: the size of the list that was free’d.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current = *h, *next = NULL;
	size_t count = 0;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
		count++;
		if (current >= next)
			break;
	}
	*h = NULL;
	return (count);
}
