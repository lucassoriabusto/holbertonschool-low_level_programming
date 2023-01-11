#include "search_algos.h"
/**
 * linear_search - a function that searches for a value in an array
 * of integers using the Linear search algorithm
 * @array: the array
 * @value: the value to be searched
 * @size: size of the array
 * Return: the index of the value searched or -1 if failed
 */
int linear_search(int *array, size_t size, int value)
{
	size_t a;

	if (!array)
		return (-1);
	for (a = 0; a < size; a++)
	{
		printf("Value checked array[%ld] = [%d]\n", a, array[a]);
		if (array[a] == value)
			return (a);
	}
	return (-1);
}
