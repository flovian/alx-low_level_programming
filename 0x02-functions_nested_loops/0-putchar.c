#include "main.h"
/**
 *main - print _putchar 
 *
 * Ruturn: 0 - Always success
 */
int _putchar(char _putchar)
{
	return (write(1, &_putchar, 1));
}
