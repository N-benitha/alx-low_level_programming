#include "lists.h"

/**
 * get_nodeint_at_index - get node at index
 * @head: head
 * @index: index of the node, starting at 0
 * Return: nth node of a listint_t linked list
 * NULL if  node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;

	if (head == NULL)
		return (0);
	tmp = head;
	while (index != 0)
	{
		tmp = tmp->next;
		index--;
		if (tmp == NULL)
			return (0);
	}
	return (tmp);
}
