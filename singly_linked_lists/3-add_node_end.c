#include "lists.h"
/**
 * add_node_end - adds a new node at the end
 * @head: pointer to the first node
 * @str: pointer to the string
 * Return: new o it is fail NULL
 *
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *aux;
	char *s;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);
	s = strdup(str);

	if (s != NULL)
	{
		new->len = strlen(s);
		new->str = s;
		new->next = NULL;
	}

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	else
	{
		aux = *head;
		while (aux->next != NULL)
		{
			aux = aux->next;
		}
		aux->next = new;
		return (new);
	}
}
