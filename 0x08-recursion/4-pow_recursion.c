#include "main.h"
/**
 * _pow_recursion - Function for pow calculation
 * @x: Base
 * @y: Power form
 * Return: Returns the calculated value
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	else
		return (x * _pow_recursion(x, y - 1));
}
