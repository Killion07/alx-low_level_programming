#include "main.h"
/**
 * print_alphabet - print alphabets a to z
 *
 * Return: 0
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

	return (0);
}
