#include "main.h"
/**
 * print_alphabet - print alphabets a to z
 *
 */

void print_alphabet(void)
{
	char al = 'a';

	while (al <= 'z')
	{
		_putchar(al);
		al++;
	}
	_putchar('\n');
}

