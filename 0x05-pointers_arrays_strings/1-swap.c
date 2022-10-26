#include "main.h"
/**
 * swap_int - function for swapping integers
 * @a: 1st integer
 * @b: 2nd integer
 */

void swap_int(int *a, int *b)
{
	*a = &b;
	*b = &a;
}
