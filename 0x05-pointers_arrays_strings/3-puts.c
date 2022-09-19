#include "main.h"

/**
 * _puts - a function that prints a str followed by a new line
 * @str: the string
 *
 * Return: 0 success
 */
void _puts(char *str)
{
	int len = 0;

	while (str[len])
	_putchar(str[len]);
	len++;
	_putchar('\n');
}
