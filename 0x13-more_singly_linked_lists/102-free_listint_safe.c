#include "lists.h"

/**
 * free_listv2 - frees linked list
 * @head: head
 * Return: nothing
 */

void free_listv2(listv_t **head)
{
	listv_t *tmp;
	listv_t *current;

	if (head != NULL)
	{
		current = *head;
		while ((tmp = current) != NULL)
		{
			current = current->next;
			free(tmp);
		}
		*head = NULL;
	}
}

/**
 * free_listint_safe - frees a listint_t list
 * @h: head
 * Return: size of the list that was free’d
 */

size_t free_listint_safe(listint_t **h)
{
	size_t nodes = 0;
	listv_t *hptr, *new, *all;
	listint_t *current;

	hptr = NULL;
	while (*h != NULL)
	{
		new = malloc(sizeof(listv_t));
		if (new == NULL)
			exit(98);
		new->ptr = (void *)*h;
		new->next = hptr;
		hptr = new;
		all = hptr;
		while (all->next != NULL)
		{
			all = all->next;
			if (*h == all->ptr)
			{
				*h = NULL;
				free_listv2(&hptr);
				return (nodes);
			}
		}
		current = *h;
		*h = (*h)->next;
		free(current);
		nodes++;
	}
	*h = NULL;
	free_listv2(&hptr);
	return (nodes);
}
