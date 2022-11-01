#include <stdlib.h>
#include "dog.h"

char *_strdup(char *str);
/**
 *new_dog - creates a new dog.
 * @name: string of char
 * @age: float
 * @owner: string of char
 * Return: a pointer to the struct dog or NULL if the function fails
 *
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog2 = NULL;
	
	dog2 = malloc(sizeof(dog_t));
	if (dog2 != NULL)
	{
		dog2->name = _strdup(name);
		if (dog2->name == NULL)
		{
			free(dog2);
			return (NULL);
		}
		dog2->owner = _strdup(owner);
		if (dog2->owner == NULL)
		{
			free(dog2->name);
			free(dog2);
			return (NULL);
		}
		dog2->age = age;
	}
	return (dog2);
}



/*
 * _strlen - function that returns the length of a string.
 * @s: pointer to check
 *
 * Return: Always 0.
 *
 */
int _strlen(char *s)
{
	int len = 0;
	
	while (*s)
	{
		len++;
		s = s + 1;
	}
	return (len);
}

/**
 * _strdup - copy of the string given as a parameter
 * @str: string of char
 *
 * Description: The _strdup() function returns a pointer to a new string which
 * is a duplicate of the string str. Memory for the new string is
 * obtained with malloc, and can be freed with free.
 * Returns NULL if str = NULL
 *
 * Return: a pointer to the duplicated string. It returns
 * NULL if insufficient memory was available
 *
 */

char *_strdup(char *str)
{
	char *res = NULL;
	int i = 0;
	
	if (str != NULL)
		res = malloc(_strlen(str) + 1);
	if (res != NULL)
	{
		for (i = 0; i <= _strlen(str); i++)
			res[i] = str[i];
	}
	return (res);
}
