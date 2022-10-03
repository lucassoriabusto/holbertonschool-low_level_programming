#include <stdio.h>
/**
 * main - description
 *
 * Return: 0
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar (num % 10 + '0');
		if (num == 10)

		putchar(',');
		putchar(' ');
	}

	putchar ('\n');
	return (0);
}
