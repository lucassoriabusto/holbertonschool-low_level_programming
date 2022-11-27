#include "lists.h"
/**
* dlistint_len - return the number of elements ina linked list
* @h: pointer to head node
*
* Return: number of elements
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t c = 0;

	if (h == NULL)
		return (0);
	for (c = 0; h != NULL; c++)
	{
		h = h->next;
	}
	return (c);
}
