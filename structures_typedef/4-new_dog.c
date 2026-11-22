#include <stdlib.h>
#include "dog.h"

/**
 * _copy - duplicates a string into newly allocated memory
 * @src: the string to copy
 *
 * Return: pointer to the copy, or NULL on failure
 */
char *_copy(char *src)
{
	char *dup;
	int len, i;

	len = 0;
	while (src[len] != '\0')
		len++;

	dup = malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		dup[i] = src[i];

	return (dup);
}

/**
 * new_dog - creates a new dog
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the dog's owner
 *
 * Return: pointer to the new dog, or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	if (name == NULL || owner == NULL)
		return (NULL);

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	d->name = _copy(name);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}

	d->owner = _copy(owner);
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	d->age = age;
	return (d);
}
