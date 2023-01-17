#include "main.h"
/**
 * _strpbrk - Function
 * @s: 1st string
 * @accept: 2nd string
 * Return: Returns string else NUL
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}

	return (NULL);
}
