#include <stdio.h>
#include <stdlib.h>

/*
 * malloc_checked - allocates memory using malloc
 * @b: amount of memory
 *
 * Return: pointer to our new allocated memory, 
 * exit with 98 if malloc fails
 */

void *malloc_checked(unsigned int b)
{
	void *new_mem;

	new_mem = malloc(b);
	if (new_men == NULL)
		exit(98);
	return (new_mem);
}
