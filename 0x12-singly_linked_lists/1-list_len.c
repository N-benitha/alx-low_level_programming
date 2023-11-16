#include "lists.h"

/**
 * list_len - shows the length of a list
 * @h: linked list
 * Return: number of elements in a linked list_t list
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}
