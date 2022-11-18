#include "function_pointers.h"
/**
 * array_iterator - Function for actioning array
 * @array: Array to action
 * @size: Size of the array
 * @action: Pointer function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size ; i++)
			action(array[i]);
	}
}
