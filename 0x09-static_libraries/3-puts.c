#include "main.h"
/**
 * _puts - Function for printing string
 * @str: String variabls
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
