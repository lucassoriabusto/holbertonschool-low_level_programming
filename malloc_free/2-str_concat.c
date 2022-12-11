#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * str_concat - concatenates two strings.
  * @s1: First string.
  * @s2: Second string.
  *
  * Return: a pointer to a newly allocated space in memory which contains the
  * contents of s1, followed by the contents of s2, and null terminated.
  * If the function fails, returns NULL instead.
  */

char *str_concat(char *s1, char *s2)
{
	char *s3 = NULL;
	int i = 0, j = 0, len = 0, len2 = 0;

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
	s3 = malloc(len + len2 + 1);
	if (s3 == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		s3[i] = s1[i];
	for (i = len; i < len + len2 + 1; i++)
	{
		s3[i] = s2[j];
		j++;
	}
	return (s3);
}
