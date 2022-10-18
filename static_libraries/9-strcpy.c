#include "main.h"

/**
  * *_strcpy - copies a pointed string to another pointer destination.
  * @dest: String destination.
  * @src: String origin.
  *
  * Description: copies the string pointed to by src, including the terminating
  * null byte (\0), to the buffer pointed to by dest.
  * Return: The pointer to dest.
  */

char *_strcpy(char *dest, char *src)
{
	int i, count = 0;

	while (*(src + count) != '\0')
	{
		count++;
	}
	for (i = 0; i <= count; i++)
		*(dest + i) = *(src + i);
	return (src);
}
