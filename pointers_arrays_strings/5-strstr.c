#include "main.h"

/**
  * *_strstr - searches a string for any of a set of bytes.
  * @haystack: String parameter.
  * @needle: String for set of bytes.
  *
  * Description: Locates the first occurrence in the string s of any of the
  * bytes in the string accept.
  * Return: a pointer to the byte in s that matches one of the bytes in accept,
  * or NULL if no such byte is found.
  */

char *_strstr(char *haystack, char *needle)
{
	char *haycp, *needcp;

	if (!*needle)
		return (haystack);
	while (*haystack)
	{
		if (*haystack == *needle)
		{
			haycp = haystack;
			needcp = needle;
			while (*needcp)
			{
				if (*haystack++ != *needcp++)
				{
					haystack = haycp;
					break;
				}
			}
			if (haycp != haystack)
				return (haycp);
		}
		haystack++;
	}
	return (0);
}
