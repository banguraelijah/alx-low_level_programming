#include "main.h"

/**
 * _puts_recursion - prints a string folllowed by a new line
 * @s: string to print
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
{
	_putchar(*s);
}
	else
	_putchar('\n');
}
