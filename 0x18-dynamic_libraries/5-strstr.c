#include "main.h"
/**
 * _strstr - Entry point
 * @hstack: input
 * @needle: input
 * Return: Always 0 ()
 */
char *_strstr(char *hstack, char *needle)
{
  for (; *hstack != '\0'; hstack++)
    {
      char *l = hstack;
      char *i = needle;

      while (*l == *i && *i != '\0')
	{
	  l++;
	  i++;
	}

      if (*i == '\0')
	return (hstack);
    }

  return (0);
}
