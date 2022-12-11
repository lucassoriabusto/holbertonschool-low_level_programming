#include "main.h"
#include <stdlib.h>

/**
  * _calloc - allocates memory for an array, using malloc.
  * @nmemb: Number of elements of the array.
  * @size: Number of bytes of each element.
  *
  * Return: A pointer to the allocated memory or NULL if nmemb or size is 0 or
  * if malloc fails.
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *c = NULL;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	c = malloc(size * nmemb);
	if (!c)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		c[i] = 0;
	return (c);
}
