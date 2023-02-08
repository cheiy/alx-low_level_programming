#include "hash_tables.h"

/**
 * hash_table_create - Function creates a hash table.
 * @size: The size of the array.
 *
 * Description: Function creates a hash table
 *
 * Return: Returns a pointer to the newly created hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int idx;
	hash_table_t *table;

	idx = 0;
	table = malloc(sizeof(hash_table_t));
	table->size = size;
	table->array = (hash_node_t **) calloc(table->size, sizeof(hash_node_t *));

	for (idx = 0; idx < table->size; idx++)
		table->array[idx] = NULL;
	return (table);

}
