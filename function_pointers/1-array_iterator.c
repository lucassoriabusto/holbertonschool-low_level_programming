#include "function_pointers.h"
/**
 * array_iterator - function given as a parameter on ech elementen of a array
 * @array: int array
 * @action: pointer to function
 * @size: array size
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);

	}
}
