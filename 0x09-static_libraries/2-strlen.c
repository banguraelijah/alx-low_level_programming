#include "main.h"

/**
 * _strlen - length of the str
 * @s: the string used
 *
 * Return: nothing
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;
	return (len);
}
