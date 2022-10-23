#include "main.h"
/**
 * _isupper - Function for checking upper or lower case
 * @c: Variable that we are checking
 *
 * Return: Return 1 for upper, 0 for lower
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
