#include "lists.h"

/**
* add_nodeint - adds a new node at the beginning of a list
* @head: pointer of head list
* @n: integer to store in a new node
*
* Return: adress of new element or NULL if it failed
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node = NULL;

	node = malloc(sizeof(listint_t));

	if (node != NULL)
	{
		node->next = *head;
		*head = node;
		node->n = n;
		return (node);
	}
	else
	return (NULL);
	free(node);
}
