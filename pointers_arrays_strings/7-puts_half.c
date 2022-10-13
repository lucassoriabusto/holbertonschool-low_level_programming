#include "main.h"

/**
  * puts_half - prints half of a string
  * @str: string parameter
  *
  * Description: Prints the second half of a string followed by a new line.
  * Return: void.
  */

void puts_half(char *str)
{
	int i = 0, j = 0;

	while (str[i] != '\0')
		i++;
	j = i / 2;


	while (j < i)
	{
		putchar (str[j]);
		j++;
	}
	putchar('\n');
}
