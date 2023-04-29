#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - gives the string lenth
 * @s: string to check lenth
 *
 * Return: str length
 */
int _strlen(char *s)
{
	int j;

	j = 0;

	while (s[j] != '\0')
	{
		j++;
	}
	return (j);
}


/**
 * *_strcpy - copy pointed string
 * @dest: destination
 * @src: source
 * Return: dest pointer
 */
char *_strcpy(char *dest, char *src)
{
	int l, j;

	l = 0;

	while (src[l] != '\0')
	{
		l++;
	}
	for (j = 0; j < l; j++)
	{
		dest[j] = src[j];
	}
	dest[j] = '\0';
	return (dest);
}


/**
 * new_dog - generates a new dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: new dog
 **/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int l1, l2;

	l1 = _strlen(name);
	l2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (l1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (l2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
