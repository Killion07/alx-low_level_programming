#include "main.h"
/**
 * times_table - Function for printing table
 *
 */
void times_table(void)
{
	int a;
	int b;
	int c;

	for (a = 0 ; a <= 9 ; a++)
	{
		_putchar('0');
		for (b = 0 ; b <= 9 ; b++)
		{
			_putchar(',');
			_putchar(' ');
			c = b * a;

			if (c <= 9)
			{
				_putchar(c + '0');
				_putchar(' ');
			}

			else
			{
				_putchar(c / 10 + '0');
				_putchar(c % 10 + '0');
			}
		}
	_putchar('\n');
	}
}
