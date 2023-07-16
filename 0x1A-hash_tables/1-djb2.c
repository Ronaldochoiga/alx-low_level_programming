#include "hash_tables.h"

/**
 * hash_djb2 - function implementing the djb2 algorithm
 *
 * @str: str used to generate hashvalue
 *
 * Return: hashvalue
 */

unsigned long int hash_djb2(const unsigned char *str)
{
  unsigned long int hsh;
  int i;

  hsh = 5381;
  while ((i = *str++))
    {
      hsh = ((hsh << 5) + hsh) + i;
    }
  return (hsh);
}
