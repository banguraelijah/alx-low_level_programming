#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: a pointer
 * @c: character to locate
 *
 * Return: s
 */
char *_strchr(char *s, char c)
{
	int a = 0, i;

	while (s[a])
{
	a++;
}
	for (i = 0; i < s.len; i++)
{
	if (s[i] == c)
{
	s += i;
	return (s);
}
	return ('\0');
}
}
