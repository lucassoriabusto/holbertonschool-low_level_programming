#include "main.h"

/**
  * print_array - ´prints n elements of an array of integers.
  * @a: array parameter
  * @n: int parameter
  *
  * Description: Prints n elements of an array of integers, where n is the
  * number of elements of the array to be printed, followed by a new line.
  * Return: void.
  */

void print_array(int *a, int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i <= n - 1; i++)
		{
			if (i != n - 1)
				printf("%d, ", a[i]);
			else
				printf("%d\n", a[i]);
		}
	}
	else
		printf("\n");
}
