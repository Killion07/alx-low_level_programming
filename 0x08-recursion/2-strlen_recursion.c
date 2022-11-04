#include "main.h"
/**
 * _strlen_recursion - Function for calculating string lenght
 * @s: String to check length
 * Return: Returns count of chars
 */
int _strlen_recursion(char *s)
{
	if (s[0] != '\n')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
		return (0);
}
