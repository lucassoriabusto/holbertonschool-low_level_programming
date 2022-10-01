#include <stdio.h>
/**
 * main - description
 *
 * Return: 0
 */
int main(void)
{
	char n;

	for (n = 'a' ; n <= 'z' ; ++n)
	{
		putchar(n);
	}
	if (n != 'e' && n != 'q')
	{
		putchar(n);
	}
	putchar(10);
	return (0);
}
