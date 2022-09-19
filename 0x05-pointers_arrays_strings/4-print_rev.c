#include "main.h"

/**
 * print_rev - print str in reverse
 * @s: str to be printed
 *
 * Return: void
 */
void print_rev(char *s)
{
	int len = 0;

	while(s[len])
	_putchar(s[len]);
	len++;

	while (len--)
	_putchar('\n');
}
