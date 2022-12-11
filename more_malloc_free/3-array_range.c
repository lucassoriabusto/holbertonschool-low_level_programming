#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of strings
 * @min: First element of the array.
 * @max: Last element and size of the array.
 *
 * Return: A pointer to the created array or NULL if min is greater than max or
 * if malloc fails.
 */

int *array_range(int min, int max)
{
	int *n = NULL, i;

	if (min > max)
		return (NULL);
	max = max - min + 1;
	n = malloc(max * sizeof(*n));
	if (!n)
		return (NULL);
	for (i = 0; i < max; i++)
	{
		n[i] = min;
		min++;
	}
	return (n);
}
