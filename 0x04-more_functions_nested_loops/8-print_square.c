#include "main.h"
/**
 * print_square - Function fr printing square
 * @size: value entered for the squares to be printed
 */
void print_square(int size)
{
	int a, b = 0;

	if (size > 0)
	{
		while (b < size)
		{
			for (a = 0; a < size; a++)
				_putchar(35);
			_putchar('\n');

		b++;
		}
	}
	else
		_putchar('\n');
}
