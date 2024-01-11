#include "lists.h"

/**
 * sum_dlistint - adds all data of a dlistint_t linked list
 * @head: head of a list
 * Return: sum of all the data (n) of a dlistint_t linked list,
 * or 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;
	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;
		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}
	return (sum);
}
