#include "main.h"
/**
 * print_array - Printing arrays
 * @a: The strings
 * @n: number of strings
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
		if (x != n - 1)
			printf("%d, ", a[x]);
		else
			printf("%d", a[x]);
	printf("\n");
}
