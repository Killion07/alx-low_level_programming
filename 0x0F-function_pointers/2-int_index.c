#include "function_pointers.h"
/**
 * int_index - Function for performing tasks
 * @array: the array we are performing task on
 * @size: size of array
 * @cmp: function pointer
 * Return: Returns index if true else -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}

	return (-1);
}
