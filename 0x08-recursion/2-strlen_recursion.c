#include "main.h"
/**
 * _strlen_recursion - Function for calculating string lenght
 * @s: String to check length
 * Return: Returns count of chars
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		i += _strlen_recursion(s + 1);
	}

	return (i);
}
