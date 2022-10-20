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
			c = b * a;
			_putchar(c / 10 + '0');
			_putchar(c % 10 + '0');
			_putchar(',');
			_putchar(' ');
		}
	_putchar('\n');
	}
}
