#include "main.h"
#include <stdio.h>

/**
 *strcpy - copies the string pointed by src
 *@src:source
 *@dest:destination
 *Return: pointer to destination.
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
