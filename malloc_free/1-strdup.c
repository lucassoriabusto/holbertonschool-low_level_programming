#include "main.h"
#include <stdlib.h>

/**
  * _strdup - returns a pointer to a newly allocated space in memory.
  * @str: String parameter.
  *
  * Return: returns a pointer to a new string which is a duplicate of the
  * string str, NULL if str is NULL or if dup is NULL.
  */

char *_strdup(char *str)
{
	char *dup;
	int i, j;

	if (str == NULL)
		return (NULL);

	for (j = 0; str[j] != '\0'; j++)
	{
	}

	j++;
	dup = malloc(sizeof(char) * j);

	if (dup == NULL)
		return (NULL);

	for (i = 0; i < j; i++)
		dup[i] = str[i];
	return (dup);
}
