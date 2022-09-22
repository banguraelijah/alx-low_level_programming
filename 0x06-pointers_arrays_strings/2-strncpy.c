#include "main.h"

/**
 * _strncpy - copies specific numbers of characters in a string
 * @dest: string to be used<F9>
 * @src: string to copy
 * @n: length of string to be copied
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, len1, len2;

	len1 = strlen(dest);
	len2 = strlen(src);

	for (i = 0; len2 && i < n; i++)
{
	dest[len1++] = src[i];
{
	for (i = len2; i < n; i++)
{
		dest[i] = '\0';
}
}
}
return (dest);
}
