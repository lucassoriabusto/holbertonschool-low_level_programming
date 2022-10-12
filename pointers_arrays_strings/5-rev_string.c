#include "main.h"

/**
  * rev_string - prints a string in reverse.
  * @s: string parameter.
  *
  * Description: Reverse a string, replacing each extreme with the letter
  * of the other extreme..
  * Return: void.
  */

void rev_string(char *s)
{
	int i, j, count = 0;
	char *c, tmp;

	c = s;
	while (s[count] != '\0')
		count++;
	for (j = 1; j < count; j++)
		c++;
	for (i = 0; i < count / 2; i++)
	{
		tmp = s[i];
		s[i] = *c;
		*c = tmp;
		c--;
	}
}
