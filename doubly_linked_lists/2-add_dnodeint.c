#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a list
 * @head: pointer of head list
 * @n: data to store in the new node
 *
 * Return: adress of new element or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	else
	{
		new->next = *head;
		new->prev = NULL;
		new->n = n;
	}
	if (*head != NULL)
	{
		(*head)->prev = new;
	}
	*head = new;

	return (new);
	free(new);
}
