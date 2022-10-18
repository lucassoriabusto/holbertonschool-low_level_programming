#include "main.h"

/**
  * _strncpy - copies a string.
  * @dest: Destination string.
  * @src: String to copy.
  * @n: Bytes of the string to copy.
  *
  * Description: copies a string.
  * Return: Pointer to the resulting string dest.
  */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	char *tmp = dest;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (tmp);
}
