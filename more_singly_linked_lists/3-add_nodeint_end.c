#include "lists.h"
/**
* add_nodeint_end - adds a new node at the end of a list
* @head: pointer to adrress pointer
* @n: integer of new node
* Return: the address of the new element, or NULL if it failed
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{

	listint_t *new;
	listint_t *aux;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
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
		return (new);
	}
}
