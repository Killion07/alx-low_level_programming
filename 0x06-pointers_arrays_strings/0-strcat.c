#include "main.h"

/**
 * _strcat - Function for concateneting
 * @dest: 1st string
 * @src: 2nd string
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	char *s = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (s);
}
