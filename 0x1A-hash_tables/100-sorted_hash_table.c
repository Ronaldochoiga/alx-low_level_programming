#include "hash_tables.h"

/**
 * shash_table_create - creates a hash table
 *
 * @size: the size of the array to be evaluated
 *
 * Return: hash_table or NULL
 */

shash_table_t *shash_table_create(unsigned long int size)
{
  shash_table_t *nsht = NULL;
  unsigned long int ind = 0;

  nsht = malloc(sizeof(shash_table_t));
  if (nsht)
    {
      nsht->size = size;
      nsht->array = malloc(sizeof(shash_node_t *) * size);
      if (!nsht->array)
	{
	  free(nsht);
	  return (NULL);
	}

      while (ind < size)
	{
	  nsht->array[ind] = NULL;
	  ind++;
	}
      nsht->shead = NULL;
      nsht->stail = NULL;
    }

  return (nsht);
}

/**
 * insert_node - handles the add, addend and insert.
 *
 * @ht: the hashtable to add the keyvalue.
 * @new_node: newly created node.
 */

void insert_node(shash_table_t *ht, shash_node_t *nnode)
{
  shash_node_t *tnode = NULL, *head = NULL;

  nnode->snext = NULL;
  nnode->sprev = NULL;
  if (!ht->shead && !ht->stail) /* if the linked list is empty */
    {
      ht->shead = nnode;
      ht->stail = nnode;
    }
  else if (strcmp(nnode->key, ht->shead->key) <= 0) /* if is <= first */
    {
      nnode->snext = ht->shead;
      nnode->snext->sprev = nnode;
      ht->shead = nnode;
    }
  else
    {
      head = ht->shead;
      while (head->snext && strcmp(nnode->key, head->snext->key) > 0)
	head = head->snext;
      nnode->snext = head->snext;
      nnode->sprev = head;
      tnode = head->snext;
      head->snext = nnode;
      if (!tnode)
	ht->stail = nnode;
      else
	tnode->sprev = nnode;
    }
}

/**
 * shash_table_add - adds element to the hashtable.
 *
 * @ht: the hash table to add the keyvalue.
 * @key: the key.
 * @value: value associated with the key
 *
 * Return: the new node or NULL
 */

shash_node_t *shash_table_add(shash_table_t *ht, const char *key, char *value)
{
  shash_node_t *nnode = NULL;

  nnode = malloc(sizeof(shash_node_t));
  if (!nnode)
    {
      free(value);
      return (NULL);
    }

  nnode->key = strdup(key);
  nnode->value = value;
  if (!nnode->key || !nnode->value)
    {
      if (nnode->key)
	free(nnode->key);
      free(value);
      return (NULL);
    }

  insert_node(ht, nnode);
  return (nnode);
}

/**
 * shash_table_set - adds or sets an element to the @ht hash table
 *
 * @ht: the hash table to add or update the key/value to
 * @key: the key (cannot be empty)
 * @value: value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
  unsigned long int ind;
  shash_node_t *nnode = NULL, *tnode = NULL;
  char *nvalue = NULL;

  if (!ht || !key || !value || strlen(key) == 0)
    return (0);

  ind = key_index((const unsigned char *)key, ht->size);
  tnode = ht->array[ind];

  nvalue = strdup(value);
  if (!nvalue)
    return (0);

  while (tnode)
    {
      if (strcmp(tnode->key, key) == 0)
	{
	  free(tnode->value);
	  tnode->value = nvalue;
	  break;
	}
      tnode = tnode->next;
    }

  if (!tnode)
    {
      nnode = shash_table_add(ht, key, nvalue);
      if (!nnode)
	return (0);
      nnode->next = ht->array[ind];
      ht->array[ind] = nnode;
    }

  return (1);
}

/**
 * shash_table_get - retrieves a valuekey
 *
 * @ht: the hash table to look into
 * @key: the key to look for
 *
 * Return: the value of the elem or NULL
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
  unsigned long int ind;
  shash_node_t *tnode = NULL;

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

/**
 * shash_table_print - prints a hash table
 *
 * @ht: the hash table to be  printed
 */

void shash_table_print(const shash_table_t *ht)
{
  shash_node_t *tnode = NULL;
  char *c = "";

  if (ht)
    {
      printf("{");
      tnode = ht->shead;

      while (tnode)
	{
	  printf("%s", c);
	  c = ", ";

	  if (tnode->key)
	    printf("'%s': '%s'", tnode->key, tnode->value);

	  tnode = tnode->snext;
	}
      printf("}\n");
    }
}

/**
 * shash_table_print_rev - reverse prints a hash table
 *
 * @ht: the hash table to be printed
 */

void shash_table_print_rev(const shash_table_t *ht)
{
  shash_node_t *tnode = NULL;
  char *c = "";

  if (ht)
    {
      printf("{");
      tnode = ht->stail;

      while (tnode)
	{
	  printf("%s", c);
	  c = ", ";

	  if (tnode->key)
	    printf("'%s': '%s'", tnode->key, tnode->value);

	  tnode = tnode->sprev;
	}
      printf("}\n");
    }
}

/**
 * shash_table_delete - deletes a hash table
 *
 * @ht: the hash table to be deleted
 */

void shash_table_delete(shash_table_t *ht)
{
  shash_node_t *tnode = NULL;
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
