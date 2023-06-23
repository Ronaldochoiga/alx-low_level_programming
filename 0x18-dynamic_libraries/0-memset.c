#include "main.h"
/**
 * _memset - fill block of memory with a specific values
 * @s: starting address filled memory
 * @b: desired value
 * @n: number of bytes changed
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
  int i = 0;

  for (; n > 0; i++)
    {
      s[i] = b;
      n--;
    }
  return (s);
}
