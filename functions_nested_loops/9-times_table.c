#include "main.h"
/**
 * times_table -  function that prints the 9 times table
 */
void times_table(void)
{
	int f = 0;
	int c = 0;

	for (f = 0; f < 10; f++)
	{
		for (c = 0; c < 9; c++)
		{
			if ((f * c < 10) && (f * (c + 1) >= 10))
			{
				_putchar (f * c + '0');
				_putchar (',');
				_putchar (' ');
			}
			else if (f * c >= 10)
			{
				_putchar ((f * c) / 10 + '0');
				_putchar ((f * c) % 10 + '0');
				_putchar (',');
				_putchar (' ');
			}
			else
			{
				_putchar (f * c + '0');
				_putchar (',');
				_putchar (' ');
				_putchar (' ');
			}
		}
		if (f * c < 10)
			_putchar (f * c + '0');
		else
		{
			_putchar ((f * c) / 10 + '0');
			_putchar ((f * c) % 10 + '0');
		}
		_putchar ('\n');
	}
	return;
}
