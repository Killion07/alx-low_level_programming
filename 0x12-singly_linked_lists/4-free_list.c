#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_list - function for freeing list_t
 * @head: The 1st node
 */

void free_list(list_t *head)
{
	if (head)
	{
		free_list(head->next);
		if (head->str)
			free(head->str);
		free(head);
	}
}
