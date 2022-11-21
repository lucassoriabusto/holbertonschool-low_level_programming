#include "lists.h"
/**
* free_listint2 - frees a list and sets head to NULL
* @head: pointer to thr first node of a list
*/
void free_listint2(listint_t **head)
{
	if (head)
	{
		free(head->next);
		free_listint(*head);
		*head = NULL;
	}
}
