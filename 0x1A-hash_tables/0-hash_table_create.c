#include "hash_tables.h"

/**
 * hash_table_create - to creates a hash table
 *
 * @size: the size of the array to create a hash
 *
 * Return: the hash_table, or NULL on failure
 */

hash_table_t *hash_table_create(unsigned long int size)
{
  hash_table_t *new_table = NULL;
  unsigned long int ind = 0;

  new_table = malloc(sizeof(hash_table_t));
  if (new_table)
    {
      new_table->size = size;
      new_table->array = malloc(sizeof(hash_node_t *) * size);
      if (!new_table->array)
	{
	  free(new_table);
	  return (NULL);
	}

      while (ind < size)
	{
	  new_table->array[ind] = NULL;
	  ind++;
	}
    }

  return (new_table);
}
