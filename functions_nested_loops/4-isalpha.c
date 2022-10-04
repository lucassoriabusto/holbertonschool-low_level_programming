#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: argument received
 * Return: 1 if c is a letter, lowercase or uppercase, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'A'))
		return (1);
	else
		return (0);
}
