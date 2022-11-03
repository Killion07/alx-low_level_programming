#include "main.h"
/**
 * _strchr - Function for checking character
 * @s: String to be checked
 * @c: Charcter we are checking
 * Return: We return the character position we are checking else return null
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return ((s + i));
		s++;

	}
	if (c == '\0')
		return ((s + i));
	return (NULL);
}
