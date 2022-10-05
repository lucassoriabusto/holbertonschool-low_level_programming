#include "main.h"
/**
 * print_line - draws a straight line in the terminal
 * @n: size of the line
 *
 * Description: prints various '_' forming a line, if n values 0 or less then
 * just prints a new line.
 * Return: void.
 */

void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
