#include "main.h"
#include <stdlib.h>

/**
  * string_nconcat - concatenates two strings.
  * @s1: First string.
  * @s2: String after the first string.
  * @n: Number of bytes of s2 that goes after s1.
  *
  * Return: a pointer to allocate space in memory which contains s1, followed
  * by the first n bytes of 2, and null terminated. If the function fails,
  * returns NULL.
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3 = NULL;
	unsigned int i, len, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (len = 0; s1[len] != '\0'; len++)
	{
	}
	for (len2 = 0; s2[len2] != '\0'; len2++)
	{
	}
	if (len2 > n)
		len2 = n;
	s3 = malloc((len + len2 + 1) * sizeof(char));
	if (s3 == NULL)
		return (NULL);
	for (i = 0; i < len + len2; i++)
	{
		if (i < len)
			s3[i] = s1[i];
		else
			s3[i] = s2[i - len];
	}
	s3[i] = '\0';
	return (s3);
}
