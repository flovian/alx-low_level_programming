#include <stdlib.h>
#include "dog.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: The string to copy
 * Return: a pointer to the duplicated string, NULL if insufficient memory
 * or if @str is NULL
 */
char *_strdup(char *str)
{
	char *ar;
	unsigned int i = 0;
	unsigned int j = 0;

	if (str == NULL)
		return (NULL);
	while (str[i])
		i++;
	ar = malloc(sizeof(char) * (i + 1));
	if (ar == NULL)
		return (NULL);
	while (str[j])
	{
		ar[j] = str[j];
		j++;
	}
	ar[j] = 0;
	return (ar);
}
/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: NULL if function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	char *name_cpy;
	char *own_cpy;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);

	name_cpy = _strdup(name);
	if (!name_cpy && name)
	{
		free(new);
		return (NULL);
	}
	own_cpy = _strdup(owner);
	if (!own_cpy && owner)
	{
		free(name_cpy);
		free(new);
		return (NULL);
	}

	new->name = name_cpy;
	new->age = age;
	new->owner = own_cpy;

	return (new);
}
