#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

/* Description: Header files containing prototypes for all the functions
 *               used in the 0x10 -variadic_functions directory
*/
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);

#endif /*VARIADIC_FUNCTIONS_H */
