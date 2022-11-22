#include "lists.h"
/**
*free_list - free list
* @head: pointer to the list
*/
void free_list(list_t *head)
{
	if (head)
	{
		free(head->next);
		free(head->str);
	}
}
