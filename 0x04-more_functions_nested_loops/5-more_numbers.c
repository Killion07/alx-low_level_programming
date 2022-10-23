#include "main.h"
/**
 * more_numbers - variable for printing more numbers
 *
 */
void more_numbers(void)
{
	int a;
	int b = 0;

	while (b <= 10)
	{
		for (a = 0; a <= 14; a++)
		{
			if (a > 9)
				_putchar((a / 10) + '0');
			_putchar((a % 10) + '0');
		}
		_putchar('\n');

		b++;
	}
}
