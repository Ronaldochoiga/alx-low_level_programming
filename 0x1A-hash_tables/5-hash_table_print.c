#include "hash_tables.h"

/**
 * hash_table_print - prints hash table
 *
 * @ht: the hashtable to print
 */

void hash_table_print(const hash_table_t *ht)
{
  hash_node_t *tnode = NULL;
  unsigned long int ind = 0;
  char *c = "";

  if (ht)
    {
      printf("{");
      while (ind < ht->size)
	{
	  tnode = ht->array[ind];

	  while (tnode)
	    {
	      printf("%s", c);
	      c = ", ";

	      if (tnode->key)
		printf("'%s': '%s'", tnode->key, tnode->value);

	      tnode = tnode->next;
	    }
	  ind++;
	}
      printf("}\n");
    }
}
