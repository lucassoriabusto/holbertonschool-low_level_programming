#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a list
 * @head: pointer to adrress pointer
 * @n: data to store in new node
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{

	dlistint_t *new;
	dlistint_t *aux;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;

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
		new->prev = aux;
		return (new);
	}
}
