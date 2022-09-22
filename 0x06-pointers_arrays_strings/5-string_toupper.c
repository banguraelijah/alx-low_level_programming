#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * string_toupper - converts the whole string to uppercase
 * @str: string to be converted
 *
 * Return: string
 */
char *string_toupper(char *str)
{
	int length = strlen(str);

	for (i = 0; i < length; i++)
{
	str[i] = toupper(str[i]);
}
	return (str);
}
