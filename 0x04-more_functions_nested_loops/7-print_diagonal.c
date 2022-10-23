#include "main.h"
/**
 * print_diagonal - Function for printing diagnonally
 * @n: number of time to print the diagnol lines
 */
void print_diagonal(int n)
{
	int line, j;

	if (n > 0)
	{
		for (line = 0; line < n; line++)
		{
			for (j = 0; j < line; j++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	_putchar('\n');
}
