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
	unsigned int s1_length = 0;
	unsigned int s2_length = 0;
	char *concat_string;
	unsigned int i, j;

	while (s1 == NULL)
		s1 = "";
	while (s2 == NULL)
		s2 = "";
	while (*(s1 + len1) != '\0')
		len1++;
	while (*(s2 + len2) != '\0')
		len2++;

concat_string = malloc(1 + (len1 * sizeof(s1)) + (len2 * sizeof(s2)));
	if (concat_string == NULL)
		return ('\0');
	for (i = 0; i < len1; i++)
		concat_string[i] = *(s1 + i);
	for (j = 0; j < len2; j++)
		concat_string = *(s2 + j);

	return (concat_string);
}
