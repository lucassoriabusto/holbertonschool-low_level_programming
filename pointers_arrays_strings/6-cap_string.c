#include "main.h"

/**
  * *cap_string - Capitalizes all words of a string with special separators.
  * @str: String of words.
  *
  * Description: Capitalizes all words of a string if before the word is a
  * separator of words, like space or comma.
  * Return: A pointer to str.
  */

char *cap_string(char *str)
{
	int i = 0;
	int i2 = 0;
	char *init = str;
	char sep[] = {' ', ',', '.', ';', '!', '?', '"', '(', ')',
		'{', '}', '\n', '\t'};

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			for (i2 = 0; i2 <= 12; i2++)
			{
				if (str[i] == str[0])
				{
					str[i] -= 32;
					i2 = 12;
				}
				else if (str[i - 1] == sep[i2])
				{
					str[i] -= 32;
					i2 = 12;
				}
			}
		}
		i++;
	}
	return (init);
}
