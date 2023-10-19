#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: first element
 * @str: string
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *last_node = *head;
	unsigned int len = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	while (last_node != NULL && last_node->next != NULL)
		last_node = last_node->next;

	if (last_node != NULL)
		last_node->next = new_node;
	else
		*head = new_node;

	while (new_node->str[len] != '\0')
		len++;

	new_node->len = len;
	new_node->next = NULL;

	return (new_node);
}
