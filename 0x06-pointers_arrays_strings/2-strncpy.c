#include "main.h"
#include <string.h>
/**
 * _strncpy - Function for copying
 * @dest: function to be overwriteen
 * @src: string to copy
 * @n: Define char lenght to be copied
 * Return: Notihng
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && *(src + i); i++)
	{
		*(dest + i) = *(src + i);
	}

	for (; i < n; i++)
	{
		*(dest + i) = '\0';
	}

	return (dest);
}
