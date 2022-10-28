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
	strncpy(dest, src, n);
}
