#include "hash_tables.h"

/**
 * key_index - func that gives the index of the key
 *
 * @key: the key
 * @size: the size of the array of the hashtable
 *
 * Return: index at which the key/value pair
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
  return (hash_djb2(key) % size);
}
