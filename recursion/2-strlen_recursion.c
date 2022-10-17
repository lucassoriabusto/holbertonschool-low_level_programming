#include "main.h"
/**
 * _strlen_recursion - count number of characters on a string..
 * @s: String to count.
 *
 * Return: Number of characters.
 *
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
