#include "main.h"
/**
 * jack_bauer - Function for printing 24 hours
 *
 */
void jack_bauer(void)
{
	int h;
	int m;

	for (h = 0 ; h <= 23 ; h++)
	{
		for (m = 0 ; m < 60 ; m++)
		{
			_putchar(h / 10 + '0');
			_putchar(h % 10 + '0');
			_purchar(':');
			_putchar(m / 10 + '0');
			_putchar(m % 10 + '0');
			_putchar('\n');
		}
	}
}
