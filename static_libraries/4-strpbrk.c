#include "main.h"
#include <stddef.h>

/**
*  * _strpbrk - searches a string for any of a set of bytes
*   * @s: string
*    * @accept: bytes to search
*     * Return: s if match, NULL if not
**/

char *_strpbrk(char *s, char *accept)
{
	int i, x;

	for (i = 0; s[i]; i++)
	for (x = 0; accept[x]; x++)
	if (s[i] == accept[x])
	return ((s + i));
	return (NULL);
}
