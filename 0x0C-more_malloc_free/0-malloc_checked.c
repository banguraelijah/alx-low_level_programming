#include <stdlib>
#include "main.h"

/**
 * malloc_checked - allocates memmory using malloc
 * @b: an unsigned integre
 *
 * Return: A pointer to the allocated memmory
 * If fail return 98
 */
void *malloc_checked(unsigned int b)
{
	void *m = malloc(b);

	if (m == NULL)
		exit(98);

	return (m);
}
