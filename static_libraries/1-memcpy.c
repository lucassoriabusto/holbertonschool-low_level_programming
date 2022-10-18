#include "main.h"

/**
  * *_memcpy - copies memory area.
  * @dest: Pointer to array where paste bytes.
  * @src: Pointer to array where copy bytes.
  * @n: First n bytes of src.
  *
  * Description: copies the first n bytes of the memory area src to memory
  * area dest.
  * Return: A pointer to dest.
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *init = dest;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*dest = src[i];
		dest++;
	}
	return (init);
}
