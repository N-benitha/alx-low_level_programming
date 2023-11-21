#include "lists.h"

/**
 * free_listv - frees linked list
 * @head: head
 * Return: no return
 */

void free_listv(listv_t **head)
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
 * print_listint_safe - prints a listint_t linked list
 * @head: head
 * Return: number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;
	listv_t *h, *new, *all;

	h = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(listv_t));
		if (new == NULL)
			exit(98);
		new->ptr = (void *)head;
		new->next = h;
		h = new;
		all = h;
		while (all->next != NULL)
		{
			all = all->next;
			if (head == all->ptr)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listv(&h);
				return (nodes);
			}
		}
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nodes++;
	}
	free_listv(&h);
	return (nodes);
}
