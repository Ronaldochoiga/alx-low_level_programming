#include "hash_tables.h"

/**
 * hash_table_delete - del a hashtable
 *
 * @ht: the hash table to be deleted
 */

void hash_table_delete(hash_table_t *ht)
{
  hash_node_t *tnode = NULL;
  unsigned long int ind = 0;

  if (ht)
    {
      while (ind < ht->size)
	{
	  while (ht->array[ind])
	    {
	      tnode = ht->array[ind];
	      ht->array[ind] = ht->array[ind]->next;

	      if (tnode->value)
		free(tnode->value);
	      if (tnode->key)
		free(tnode->key);
	      free(tnode);
	    }
	  free(ht->array[ind]);
	  ind++;
	}
      free(ht->array);
      free((void *)ht);
    }
}
