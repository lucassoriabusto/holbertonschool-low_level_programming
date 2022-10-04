#include "main.h"

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'A'))
		return (1);
	else
		return (0);
}
