#include "function_pointers.h"
/**
 * print_name - A function that prints a name
 * @f: the name
 * @name: name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
