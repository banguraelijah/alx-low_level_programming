#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: string to compare
 * @s2: string to compare
 *
 * Return: flag
 */
int _strcmp(char *s1, char *s2)
{
	int flag = 0, i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
{
	if (s1[i] != s2[i])
{
	flag = 1;
	break;
if (flag == 0)
	_putchar("same");
else
	_putchar("notsame");
}
}
return (flag);
}
