#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: head
 * @index: index of the node that should be deleted
 * Return: 1 if success, -1 if failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *h;
	listint_t *tmp;

	if (head == NULL || (*head) == NULL)
		return (-1);
	h = *head;
	if (index == 0)
	{
		if ((*head)->next)
			(*head) = (*head)->next;
		else
			(*head) = NULL;
		free(h);
		return (1);
	}
	while (index != 1)
	{
		if (h->next == NULL)
			return (-1);
		h = h->next;
		index--;
	}
	tmp = h->next;
	if (h->next->next)
		h->next = h->next->next;
	else
		h->next = NULL;
	free(tmp);
	return (1);
}
