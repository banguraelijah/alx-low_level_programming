#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * is_palindrome - checks if going foward in a string is the same as going backwards
 * @s : the string
 *
 * Return: 1 if true and 0 if not
 */
int is_palindrome(char *s)
{
	*s = s;
	int i;
	int middle = strlen(s) / 2;
	int len = strlen(s);

	for (i = 0; i < middle; i++)
{
	if (s[i] != s(len - i - 1))
		return (0);
	return 1;
}
