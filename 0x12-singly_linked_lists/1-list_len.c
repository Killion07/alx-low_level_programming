#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - Function for retruning number of linked lists
 * @h: Number of nodes
 * Return: Number of linked list
 */

size_t list_len(const list_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
