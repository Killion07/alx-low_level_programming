#include "main.h"
/**
 * _strchr - Function for checking character
 * @s: String to be checked
 * @c: Charcter we are checking
 * Return: We return the character position we are checking else return null
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);
	return (NULL);
}
