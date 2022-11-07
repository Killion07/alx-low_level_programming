#include "main.h"
/**
 *_islower - checks if characters is lower
 *@c: The character that will be checked
 *
 * Return: ret
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
