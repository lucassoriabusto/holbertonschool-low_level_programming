#include "main.h"
#include <stdlib.h>
/**
 *create_array - creates an array of chars.
 * @size: Size of the array.
 * @c: Specific char to initialize array.
 *
 * Return: A pointer to the array or NULL if size is equal to 0 or if it fails
 *
 */
char *create_array(unsigned int size, char c)
{
	unsigned int a = 0;
	char *arr = NULL;

	if (size != 0)
	{
		arr = malloc(size * sizeof(char));
		if (arr != 0)
		{
			for (a = 0; a <= size; a++)
				arr[a] = c;
			return (arr);
		}
	}
	return (NULL);
}
