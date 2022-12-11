#include "function_pointers.h"
/**
 * int_index - function that searches for an integer
 *@array: int array
 *@size: arays size
 *@cmp: pointer to function
 *
 *Return: -1 if size <= 0, integer if no, integer if nott
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp && size > 0)
	{
		for (i = 0; i < size; i++)

		if ((cmp)(array[i]))
		{
			return (i);
		}
		return (-1);
	}
	return (-1);
}
