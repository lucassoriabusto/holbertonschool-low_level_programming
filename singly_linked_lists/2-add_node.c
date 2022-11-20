#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: pointer to first node
 * @str: string
 * Return: new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	char *s;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	s = strdup(str);
	if (s != NULL)
	{
		new->next = *head;
		*head = new;
		new->str = s;
		new->len = strlen(str);

		return (new);
	}
	free(new);
	return (NULL);
}
