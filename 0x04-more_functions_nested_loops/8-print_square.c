#include <stdio.h>
#include "main.h"

/**
 * print_square - print a square in the terminal
 * @size: size of the square
 */
void print_square(int size)
{
	if (size > 0)
{
	_putchar('\n');
}

	else
{
	int i, j;

	for (i = 0; i < size; i++)
{
	for (j = 0; j < size - 1; i++)
{
	_putchar('#');
}
	_putchar('#');
	_putchar('\n');
}
}
}
