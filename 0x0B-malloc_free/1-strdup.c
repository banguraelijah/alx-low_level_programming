#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * _strdup - return pointer to a newly allocated space in memory with strcpy
 * @str: pointer to the string to be copied
 * Return: pointer to newely allocated merrory on success
 * NULL if str is NULL
 * NULL if insufficient space was avaliable
 */
char *_strdup(char *str)
{
	char *str_cpy;
	unsigned int i;
	unsigned int length_of_str = 0;

	if (str == NULL)
	return ('\0');
	while (*(str + length_of_str) != '\0')
		length_of_str++;
	length_of_str++;
	str_cpy = malloc(*(str) * length_of_str);
	if (str_cpy == NULL)
	return ('\0');
	for (i = 0; i < length_of_str; i++)
	str_cpy[i] = *(str + i);
	str_cpy[i] = '\0';
	return (str_cpy);
}
