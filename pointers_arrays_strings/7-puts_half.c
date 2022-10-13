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
	int i = 5;

	while ( i < 10 && str[i] != '\0' )
	{
		_putchar (str[i]);
		i++;
	}
	_putchar('\n');
}
