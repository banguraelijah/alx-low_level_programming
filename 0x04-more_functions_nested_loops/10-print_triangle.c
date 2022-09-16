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
	int i, j;

	for (i = 0; i <= size; i++)
{
	for (j = 0; j <= size - 1; j++)
{
	_putchar(' ');
}
	for (j = 1; j <= i - 1; j++)
{
	_putchar('#');
}
_putchar('\n');
}
}
}
