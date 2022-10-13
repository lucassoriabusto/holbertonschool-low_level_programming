#include "main.h"

/**
  * reverse_array - reverse an array of integers.
  * @a: array of integers
  * @n: number of integers in array.
  *
  * Description:  reverses the content of an array of integers where is n
  * is the number of elements of the array.
  * Return: void.
  */
void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < n - 1; i++)
	{
		tmp = a[n - 1];
		a[n - 1] = a[i];
		a[i] = tmp;
		n--;
	}
}
