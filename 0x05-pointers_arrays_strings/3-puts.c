#include "main.h"
/**
 * _puts - Function for printing string
 * @str: String variabls
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);

	_putchar('\n');
}
