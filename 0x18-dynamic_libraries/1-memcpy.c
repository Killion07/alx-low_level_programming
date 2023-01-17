#include "main.h"
/**
 * _memcpy - Function for copying
 * @dest: char to be overwritten
 * @src: string being copied
 * @n: Size in bytes to be owerwritten
 * Return: return overwriten string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)

		*(dest + i) = *(src + i);

	return (dest);
}
