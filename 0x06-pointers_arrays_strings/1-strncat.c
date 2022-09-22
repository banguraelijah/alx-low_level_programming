#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatenate two strings
 * @dest: string to be used
 * @src: string to ne concatenated
 * @n: the limit for \0 to be added
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len1, len2, i;

	len1 = strlen(dest);
	len2 = strlen(src);

	for (i = 0; len2 && i < n; i++)
{
	dest[len1++] = src[i];
}
return (dest);
}
