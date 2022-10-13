#include "main.h"

/**
  * _strncat - concatenates two strings.
  * @dest: Destination string.
  * @src: String to add to end of dest.
  * @n: Bytes from src.
  *
  * Description: Concatenates two strings. Appends the src string to the dest
  * string, overwriting the terminating null byte (\0) at the end of dest, and
  * then adds a terminating null byte.
  * Return: char pointer to dest.
  */

char *_strncat(char *dest, char *src, int n)
{
	int count = 0;
	int src_count = 0;
	char *tmp = dest;
	char *tmp2 = src;

	while (*dest)
		dest++;
	while (*src++)
		src_count++;
	while (count < src_count && count != n)
	{
		*dest++ = *tmp2++;
		count++;
	}
	if (*src >= n)
		*dest = '\0';
	return (tmp);
}
