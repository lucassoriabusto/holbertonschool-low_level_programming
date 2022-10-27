#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - alocates memory
 *@b: size of memory, unsigned integer
 * Return: 98 if malloc fails, pointer if not fails
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = NULL;
		ptr = malloc(b);
			if (!ptr)
			exit (98);
	return (ptr);
}
