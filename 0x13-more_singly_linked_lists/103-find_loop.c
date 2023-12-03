#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: head
 * Return: he address of the node where the loop starts
 * or returns NULL if ther's no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *b;
	listint_t *prev;

	b = head;
	prev = head;
	while (head && b && b->next)
	{
		head = head->next;
		b = b->next->next;
		if (head == b)
		{
			head = prev;
			prev =  b;
			while (1)
			{
				b = prev;
				while (b->next != head && b->next != prev)
				{
					b = b->next;
				}
				if (b->next == head)
					break;
				head = head->next;
			}
			return (b->next);
		}
	}
	return (NULL);
}
