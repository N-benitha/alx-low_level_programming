#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: head
 * Return: head node’s data (n), 0 if the linked list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int a;

	if (head == NULL)
		return (0);
	tmp = *head;
	if (tmp == NULL)
		return (0);
	a = tmp->n;
	*head = tmp->next;
	free(tmp);
	return (a);
}
