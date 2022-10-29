#include "main.h"
#include <string.h>
/**
 * _strncat - Function for concatenetaing
 * @dest: 1st string
 * @src: 2nd string
 * @n: Checking character length
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	for (a = 0; *dest != '\0'; a++)
	{
		continue;
	}

	for (b = 0; *src != '\0' && b < n; b++)
	{
		dest[a + b] = src[b];
	}
	dest[a + b] = '\0';

	return (dest);
}
