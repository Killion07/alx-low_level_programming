#include "variadic_functions.h"
/**
 * sum_them_all - Function for addition
 * @n: Number of integers added
 * Return: Returns 0 or summ
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list a;

	va_start(a, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		sum += va_arg(a, unsigned int);

	va_end(a);

	return (sum);
}
