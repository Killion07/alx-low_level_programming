#include "main.h"
/**
 * swap_int - function for swapping integers
 * @a: 1st integer
 * @b: 2nd integer
 */

void swap_int(int *a, int *b)
{
	int i;
	int j;

	i = *a;
	j = *b;
	*a = j;
	*b = i;
}
