#include "main.h"
/**
 * print_sign - Returns the sign of a number
 *@n: The number of which the sign will be printed.
 *
 * Return: Returns 1 0 or -1
 */
int print_sign(int n)
{

	if (n > 0)
		_putchar('+');
	_putchar('\n');
	return (1);

	else if (n == 0)
		_putchar('0');
	_putchar('\n');
	return (0);

	else
		_putchars('-');
	_putchar('\n');
	return (-1);
}
