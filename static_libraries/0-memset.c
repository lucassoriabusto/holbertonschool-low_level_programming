#include "main.h"

/**
  * *_memset - fills memory with a constant byte.
  * @s: Pointer to array.
  * @b: Constant byte.
  * @n: First n bytes.
  *
  * Description: fills the first n bytes of the memory area pointed to by s
  * with the constant byte c.
  * Return: A pointer to the memory area s.
  */

char *_memset(char *s, char b, unsigned int n)
{
	char *init = s;
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (init);
}
