#include "main.h"

/**
 * _memcpy - function that copies memory data
 * @dest: destination of source copied
 * @src: what will be copied
 * @n: bytes from memory area to copy
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *char_dest = (char *) dest;
	char *char_src = (char *) src;

	for (i = 0; i < n; i++)
{
	dest[i] = src[i]
}
return (dest);
}
