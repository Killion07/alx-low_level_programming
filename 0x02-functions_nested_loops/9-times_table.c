#include "main.h"
/**
 * times_table - Function for printing table
 *
 */
void times_table(void)
{
	int a;
	int b;

	for (a = 0 ; a <= 0 ; a++)
	{
		for (b = 0 ; b <= 9 ; b + a)
		{
			_putchar(a / 10 + '0');
			_putchar(a % 10 + '0');
			_putchar(b / 10 + '0');
			_putchar(b % 10 + '0');
		}
	_putchar('\n');
	}
}
