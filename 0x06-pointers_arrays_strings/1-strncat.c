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
	strncat(dest, src, n);

	return (dest);
}
