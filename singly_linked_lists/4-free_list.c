#include "lists.h"
/**
 *
 *
 */
void free_list(list_t *head)
{
	if (head)
	{
		free(head);
	}
}
