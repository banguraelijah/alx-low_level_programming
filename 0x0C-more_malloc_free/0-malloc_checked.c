#include "main.h"
#include <stdlib>

/**
 * malloc_checked - allocates memmory using malloc
 * @b: an unsigned integre
 *
 * Return: A pointer to the allocated memmory
 * If fail return 98
 */
void *malloc_checked(unsigned int b)
{
	int *m = malloc(b);

	if (m == 0)
		exit(98);

	return (m);
}
