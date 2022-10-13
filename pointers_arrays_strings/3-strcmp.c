#include "main.h"

/**
  * *_strspn - gets the length of a prefix substring.
  * @s: String parameter.
  * @accept: Substring parameter.
  *
  * Description: gets the length of a prefix substring.
  * Return: The number of bytes in the initial segment of s which consist onlyi
  * of bytes from accept.
  */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0, i = 0, j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != 32)
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
					count++;
			}
		}
		else
			return (count);
	}
	return (count);
}
