#include "main.h"
#include <stdlib.h>
/**
 * create_array - Function for creating array
 * @size: Size of array
 * @c: first character
 * Return: Return Null or array
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	int i;

	if (size == 0)
		return (NULL);

	arr = (char *)malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
