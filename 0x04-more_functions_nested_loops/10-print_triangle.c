#include <stdio.h>
#include "main.h"

/**
 * print_triangle - prints a triangle in the terminal
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	if (size <= 0)
{
	_putchar('\n');
}
else
{
	int i, j, n;

	for (i = 0; i <= size; i++)
{
	for (j = 0; j <= size - 1; j++)
{
	_putchar(' ');
}
	for (n = 1; n <= i - 1; n++)
{
	_putchar('#');
}
_putchar('\n');
}
}
}
