#include "lists.h"
/**
* listint_len - function that return the numbers of elements in a linked list
* @h: head to pointer list
* Return: the number of elements in a linked list
*/

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	for (i = 0; h != NULL; i++)

		h = h->next;

	return (i);
}
