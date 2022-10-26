#include "main.h"
/**
 * _strlen - function for counting strings
 * @s: Varible for counting
 * Return: value of length
 */
int _strlen(char *s)
{
	int i = 0;

	for (; *s++;)
		i++;
	return (i);
}
