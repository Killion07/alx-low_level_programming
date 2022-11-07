#include "main.h"

/**
 * _strcpy - copy strings
 * @dest: 1st strings
 * @src: 2nd strings
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
		dest[a] = src[a];

	dest[a] = '\0';

	return (dest);
}
