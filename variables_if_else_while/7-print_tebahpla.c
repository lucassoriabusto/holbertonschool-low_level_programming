#include <stdio.h>
/**
 * main - description
 *
 * Return: 0
 */
int main(void)
{
	char rev;

	for (rev = 'z' ; rev >= 'a' ; --rev)
		putchar (rev);
	putchar ('\n');
	return (0);
}
