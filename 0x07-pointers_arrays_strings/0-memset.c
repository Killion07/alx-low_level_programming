#include "main.h"
/**
 * _memset - Function for memset
 * @s: The string we need to work on
 * @b: Character that will be used to replace part of the string
 * @n:Number of characters being replaced
 * Return: return pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	while (a < n)
	{
		s[a] = b;
		a++;
	}

	return (s);
}
