#include "main.h"
/**
 * factorial - Function for running factorial
 * @n: Number given
 * Return: Return facrorial claculation else -1
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	else if (n == 0)
		return (1);

	else
		return (n * factorial(n - 1));
}
