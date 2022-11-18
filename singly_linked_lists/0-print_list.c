#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list
 * @h: is the pointer to a structure of a linked list
 * Return: the number of nodes
 *
 */
size_t print_list(const list_t *h)
{
	int n = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		n++;
	}
	return (n);
}
