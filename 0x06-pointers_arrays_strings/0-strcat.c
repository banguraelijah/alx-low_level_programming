#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcat - writes a unction that concatenates two strings
 * @dest: frist string
 * @src: string to be concatenated
 *
 * Return: always 0 on success
 */
char *_strcat(char *dest, char *src)
{
	int len1, len2, i;

	len1 = strlen(dest);
	len2 = strlen(src);

	for (i = 0; i <= len2; i++)
{
	dest[len1 + i] = src[i];

	_putchar("%s", dest);
}
_putchar('\n');
return (0);
}
