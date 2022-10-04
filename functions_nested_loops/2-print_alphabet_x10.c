#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char n;
	int i = 0;

	while (i <= 9)
	{
		for (n = 'a' ; n <= 'z' ; n++)
		{
			_putchar(n);
		}
		i++;
		_putchar('\n');
	}
}
