#include "lists.h"
/**
 * list_len - returns the number of elements in a linked
 * @h: is the pointer to a structure of a linked list
 * Return: the number of nodes
 *
 */
size_t list_len(const list_t *h)
{
	int c = 0;

	if (h == NULL)
		return (0);
	for (c = 0; h != NULL; c++)
	{
		h = h->next;
	}
	return (c);
}
