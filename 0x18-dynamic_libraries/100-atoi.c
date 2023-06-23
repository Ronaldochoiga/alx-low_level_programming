#include "main.h"

/**
 * _atoi - converts strings to integers
 * @s: string to convert
 *
 * Return: converted string
 */
int _atoi(char *s)
{
  int j, k, l, length, m, dig;

  j = 0;
  k = 0;
  l = 0;
  length = 0;
  m = 0;
  dig = 0;

  while (s[length] != '\0')
    length++;

  while (j < length && m == 0)
    {
      if (s[j] == '-')
	++k;

      if (s[j] >= '0' && s[j] <= '9')
	{
	  dig = s[j] - '0';
	  if (k % 2)
	    dig = -dig;
	  l = l * 10 + dig;
	  m = 1;
	  if (s[j + 1] < '0' || s[j + 1] > '9')
	    break;
	  m = 0;
	}
      j++;
    }

  if (m == 0)
    return (0);

  return (l);
}
