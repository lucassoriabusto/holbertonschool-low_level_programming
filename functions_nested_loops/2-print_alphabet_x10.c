#include "main.h"
/**
 * print_alphabet - description
 *
 * Return: 0
 */

int main(void)
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
