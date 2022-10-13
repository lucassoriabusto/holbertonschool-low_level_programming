#include "main.h"

/**
  * *leet - encodes a string into leet.
  * @str: String of word.
  *
  * Description: encodes a string into leet, replacing some letters with
  * numbers, like a or A replaced by 4.
  * Return: A pointer to str.
  */

char *leet(char *str)
{
	char letter[] = {'a', 'A', 'o', 'O', 'l', 'L', 'E', 'e', 'T', 't'};
	char number[] = {'4', '4', '0', '0', '1', '1', '3', '3', '7', '7'};
	char *init = str;
	int i = 0, i2;

	while (str[i] != '\0')
	{
		for (i2 = 0; i2 <= 10; i2++)
		{
			if (str[i] == letter[i2])
			{
				str[i] = number[i2];
				i2 = 10;
			}
		}
		i++;
	}
	return (init);
}
