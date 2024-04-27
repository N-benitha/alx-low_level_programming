#include "hash_tables.h"

/**
 * hash_table_get - pointer to a value retrieved associated with a key
 * @ht: pointer to hash table
 * @key: pointer to key
 *
 * Return: value associated with key if succeeded or NULL if key can be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index, i;
	char *value;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			value = ht->array[i]->value;
			return (value);
		}
	}

	return (NULL);
}
