#include "lists.h"

/**
* get_dnodeint_at_index - returns the nth node of a linked list
* @head: pointer to head linked list
* @index: index of the node
*
* Return: node, if the node does not exist, return NULL
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *node = NULL;

	node = head;

	if (node == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= index; i++)

	if (i == index)
	{
		return (node);
	}
	else
		node = node->next;

	return (NULL);
}
