#include "hash_tables.h"

/**
*hash_table_create - creates a hash table
*@size: size of the array
*Return: pointer to the newly created table(SUCCESS)/ NULL if failed
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hat;
	int i;

	hat = malloc(sizeof(hash_table_t));
	if (hat == NULL)
		return (NULL);
	hat->array = malloc(sizeof(hash_node_t *) * size);
	if (hat->array == NULL)
	{
		free(hat);
		return (NULL);
	}
	hat->size = size;
	i = 0;
	while (i < size)
	{
		hat->array[i] = NULL;
		i++;
	}
	return (hat);
}
