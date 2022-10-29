#include "main.h"
/**
 * string_toupper - Function for priniting string to upper case
 * @s: The string
 * Return: Returns the string
 */

char *string_toupper(char *s)
{
	int a = 0;

	while (*(s + a))
	{
		if (*(s + a) >= 'a' && *(s + a) <= 'z')
			*(s + a) -= 'a' - 'A';
		i++;
	}
	return (s);
}
