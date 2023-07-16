#include "hash_tables.h"

/**
 * hash_table_get - retrieves a valuekey
 *
 * @ht: the hashtable to look into
 * @key: the key to be looked for
 *
 * Return: the valuekey or null
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
  unsigned long int ind;
  hash_node_t *tnode = NULL;

  if (!ht || !key || strlen(key) == 0)
    return (NULL);

  ind = key_index((const unsigned char *)key, ht->size);
  tnode = ht->array[ind];

  while (tnode)
    {
      if (strcmp(tnode->key, key) == 0)
	return (tnode->value);
      tnode = tnode->next;
    }

  return (NULL);
}
