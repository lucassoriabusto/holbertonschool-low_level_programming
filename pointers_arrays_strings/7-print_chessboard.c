#include "main.h"
/**
 * print_chessboard - prints the chessboard
 * @a: pointer to a bidimensional array
 */
void print_chessboard(char (*a)[8])
{
	int i = 0;
	int x = 0;

	for (i = 0; i < 8; i++)
	{
		for (x = 0; x < 8; x++)
		{
			_putchar(a[i][x]);
		}
		_putchar('\n');
	}
}
