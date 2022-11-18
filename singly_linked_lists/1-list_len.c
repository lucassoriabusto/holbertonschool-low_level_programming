#include "lists.h"
/**
 *
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
