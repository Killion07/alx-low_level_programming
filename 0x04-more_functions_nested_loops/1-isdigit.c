#include "main.h"
/**
 * _isdigit - Function for checking digit
 * @c: The integer we are checking
 *
 * Return: returns 1 if digit and 0 if not
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
