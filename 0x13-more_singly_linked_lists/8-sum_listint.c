#include "lists.h"

/**
 * sum_listint - makes the sum of all the data (n)
 * of a listint_t linked list
 * @head: head
 * Return: sum of all the data (n) of a listint_t linked list
 * returns 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	listint_t *tmp;
	int sum = 0;

	if (head == NULL)
		return (0);
	tmp = head;
	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
