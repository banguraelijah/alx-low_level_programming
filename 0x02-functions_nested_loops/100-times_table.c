#include "main.h"
#include <stdio.h>
/**
 * print_times_table - prints the n times table, starting with 0
 * @n: representing the numbers
 */
void print_times_table(int n)
{
	int num, mult, prod;

	for (n = 0; n <= 15; n++)
{
	for (num = 0; num <= 15; num++)
{
	_putchar('0');

	for (mult = 1; mult <= 15; mult++)
{
	_putchar(',');
	_putchar(' ');
	prod = num * mult;

	if (prod <= 15)
		_putchar(' ');
	else
		_putchar((prod / 10) + '0');
	_putchar((prod % 10) + '0');
}
_putchar('\n');
}
}
}
