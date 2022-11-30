#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - Function for printing list
 * @h: number of nodes
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	int a;

	a = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		a++;
		h = h->next;
	}
	return (a);
}
