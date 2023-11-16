#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: first node
 * @str: string
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t newchar;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	for (newchar = 0; str[newchar]; newchar++)
		;
	new->len = newchar;
	new->next = *head;
	*head = new;
	return (*head);
}
