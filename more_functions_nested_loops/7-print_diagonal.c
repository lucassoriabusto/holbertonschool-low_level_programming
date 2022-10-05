#include "main.h"
/**
 * print_diagonal - Prints a diagonal line with '\'
 * @n: number of '\'
 *
 * Description: Prints a diagonal line wit '\', with a number of spaces before
 * each '\' starting from 0 to n-1. If n starts as 0 or less, returns a
 * new line.
 * Return: void
 */

void print_diagonal(int n)
{
	int x;
	int y;

	if (n > 0)
	{
		for (x = 0; x < n; x++)
		{
			for (y = 0; y < x; y++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

