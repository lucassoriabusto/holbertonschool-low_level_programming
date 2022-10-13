#include "main.h"

/**
  * *string_toupper - changes all lowercase letters of a string to uppercase.
  * @str: String to change.
  *
  * Description: Changes all lowercase letters of a string to uppercase.
  * Return: Pointer to the resulting string str.
  */
char *string_toupper(char *str)
{
	char *init = str;

	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			*str -= 32;
		str++;
	}
	return (init);
}
