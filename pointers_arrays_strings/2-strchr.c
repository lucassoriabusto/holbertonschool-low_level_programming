#include "main.h"

/**
  * *_strchr - locates a character in a string.
  * @s: String where we find..
  * @c: Character to locate.
  *
  * Description: Locates the first occurrence of a character in a string.
  * Return: A pointer to the first occurence of the chracter in the string
  * or NULL if the character is not found.
  */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i))
	{
		if (*(s + i) == c)
			return (s + i);
		i++;
	}
	if (*(s + i) == c)
		return (s + i);
	return (NULL);
}
