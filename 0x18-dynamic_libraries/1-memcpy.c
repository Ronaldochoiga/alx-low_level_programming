#include "main.h"
/**
 *_memcpy - a function that copies memory area
 *@dest: memory where is copied
 *@src: memory where is stored
 *@n: number of bytes tp be allocated
 *
 *Return: copied memory with number of  bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
  int j = 0;
  int i = n;

  for (; j < i; j++)
    {
      dest[j] = src[j];
      n--;
    }
  return (dest);
}
