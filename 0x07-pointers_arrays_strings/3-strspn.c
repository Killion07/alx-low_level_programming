#include "main.h"
/**
 * _strspn - Function for comparing strings
 * @s: First string
 * @accept: 2nd string
 * Return: Number f bytes thatare similar
 */

unsigned int _strspn(char *s, char *accept)
{
	int z, x, y;

	z = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] != 32)
		{
			for (y = 0; accept[y] != '\0'; y++)
			{
				if (s[x] == accept[y])
					z++;
			}
		}
		else
			return (z);
	}
	return (z);
}
