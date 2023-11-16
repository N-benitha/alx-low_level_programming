#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: first node
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *h;

	while ((h = head) != NULL)
	{
		head = head->next;
		free(h->str);
		free(h);
	}
}
