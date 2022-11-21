#include "lists.h"
/**
* add_nodeint_end - adds a new node at the end of a list
* @head: pointer to adrress pointer
* @n: integer of new node
* Return: the address of the new element, or NULL if it failed
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{

	listint_t *node = malloc(sizeof(listint_t));
	listint_t *new = *head;

	if (node == NULL)

		return (NULL);
	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
		return (node);
	}
	else
	{
		while (new->next)	/**new = *head*/
			new = new->next;
		new->next = node;
		return (node);
	}
}
