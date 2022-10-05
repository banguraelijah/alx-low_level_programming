#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: destination string
 * @s2: src string
 *
 * Return: null on a faliuer on success concatenated strings
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	char *concat_string;
	unsigned int i, j;

	while (s1 == NULL)
		s1 = "";
	while (s2 == NULL)
		s2 = "";
	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

concat_string = malloc(sizeof(char) * (len1 + len2 + 1));
	if (concat_string == NULL)
		return ('\0');
	i = 0;
	j = 0;
	if (s1)
{
	while (i < len1)
{
	concat_string[i] = s1[i];
	i++;
}
}
	if (s2)
{
	while (i < len2)
{
	concat_string[i] = s2[i]
		i++;
	j++;
}
	concat_string[i] = '\0';
	return (concat_string);
}
