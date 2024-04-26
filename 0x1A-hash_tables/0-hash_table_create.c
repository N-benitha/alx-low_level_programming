#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: size of the hash table
 *
 * Return: pointer to newly created hash table
 * and NULL if something went wrong
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *arr;
	unsigned long int i;

	arr = malloc(sizeof(hash_table_t));
	if (arr == NULL)
		return (NULL);

	arr->size = size;
	arr->array = malloc(sizeof(hash_table_t *) * size);

	if (arr->array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr->array[i] = NULL;

	return (arr);
}
