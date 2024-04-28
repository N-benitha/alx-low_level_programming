#include "hash_tables.h"

/**
 * shash_table_create - creates a sorted hash table
 * @size: size of the new hash table
 *
 * Return: pointer to newly created hash table
 * and NULL if something went wrong
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *arr;
	unsigned long int i;

	if (size == 0)
		return (NULL);

	arr = calloc(1, sizeof(shash_table_t));
	if (arr == NULL)
		return (NULL);

	arr->size = size;
	arr->array = calloc(size, sizeof(shash_table_t *));

	if (arr->array == NULL)
	{
		free(arr);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		arr->array[i] = NULL;
	arr->shead = NULL;
	arr->stail = NULL;

	return (arr);
}

/**
 * shash_table_set - adds an element to a sorted hash table
 * @ht: a pointer to the sorted hash table
 * @key: key to add - cannot be empty string
 * @value: value of the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *hn, *tmp;
	char *value_cp;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	value_cp = strdup(value);
	if (value_cp == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->shead;
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = value_cp;
			return (1);
		}
		tmp = tmp->next;
	}
	hn = malloc(sizeof(shash_node_t));
	if (hn == NULL)
	{
		free(value_cp);
		return (0);
	}
	hn->key = strdup(key);
	if (hn->key == NULL)
	{
		free(value_cp);
		free(hn);
		return (0);
	}
	hn->value = value_cp;
	hn->next = ht->array[index];
	ht->array[index] = hn;
	if (ht->shead == NULL)
	{
		hn->sprev = NULL;
		hn->snext = NULL;
		ht->shead = hn;
		ht->stail = hn;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		hn->sprev = NULL;
		hn->snext = ht->shead;
		ht->shead->sprev = hn;
		ht->shead = hn;
	}
	else
	{
		tmp = ht->shead;
		while (tmp->snext != NULL && strcmp(tmp->snext->key, key) < 0)
			tmp = tmp->snext;
		hn->sprev = tmp;
		hn->snext = tmp->snext;
		if (tmp->snext == NULL)
			ht->stail = hn;
		else
			tmp->snext->sprev = hn;
		tmp->snext = hn;
	}
	return (1);
}

/**
 * shash_table_get - pointer to a value retrieved associated with a key
 * in a sorted hash table
 * @ht: pointer to a sorted hash table
 * @key: pointer to key
 *
 * Return: value associated with key if succeeded or NULL if key can be found
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	node = ht->shead;
	while (node != NULL && strcmp(node->key, key) != 0)
		node = node->snext;

	return ((node == NULL) ? NULL : node->value);
}

/**
 * shash_table_print - prints a sorted hash table
 * @ht: pointer to the sorted hash table to print
 *
 * Return: nothing
 */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;
	unsigned char comma_flag = 0;

	if (ht == NULL)
		return;

	node = ht->shead;
	printf("{");
	while (node != NULL)
	{
		if (comma_flag == 1)
			printf(", ");
		printf("\'%s\' : \'%s\'", node->key, node->value);
		comma_flag = 1;
		node = node->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - prints a sorted hash table in a reverse order
 * @ht: pointer to the sorted hash table to print
 *
 * Return: nothing
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;
	unsigned char comma_flag = 0;

	if (ht == NULL)
		return;

	node = ht->stail;
	printf("{");
	while (node != NULL)
	{
		if (comma_flag == 1)
			printf(", ");
		printf("\'%s\' : \'%s\'", node->key, node->value);
		comma_flag = 1;
		node = node->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - deletes a sorted hash table
 * @ht: pointer to sorted hash table
 *
 * Return: nothing.
 */

void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *head = ht;
	shash_node_t *node, *tmp;

	if (ht == NULL)
		return;

	node = ht->shead;
	while (node)
	{
		tmp = node->snext;
		free(node->value);
		free(node->key);
		free(node);
		node = tmp;
	}
	free(head->array);
	free(head);
}


