#include <stdlib.h>
#include "main.h"
/**
 * _strchr - Function that locates a character in a string
 * @s: the string to check
 * @c: the character to check
 * Return: a pointer to the first occurance of the character @c in the string
 * @s. Return NULL if the character is not there
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
