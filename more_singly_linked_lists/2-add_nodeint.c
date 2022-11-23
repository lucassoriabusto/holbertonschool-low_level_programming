#include "lists.h"
/**
* add_nodeint - adds a new node at the beginning of a list
* @head: pointer of head list
* @n: integer to store in a new node
* Return: adress of new element or NULL if it failed
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	else
	{
		new->next = *head;
		*head = new;
		new->n = n;
		return (new);
	}
}
