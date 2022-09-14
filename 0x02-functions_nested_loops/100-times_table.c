#include "main.h"
#include <stdio.h>
/**
 * print_times_table - prints the n times table, starting with 0
 * @n: representing the numbers
 */
void print_times_table(int n)
{
	int num, mult, prod;

	if (n == 0 && n <= 14)
{
	for (num = 0; num <= 14; num++)
{

	for (mult = 1; mult <= 14; mult++)
{
	_putchar(',');
	_putchar(' ');
	prod = num * mult;

	if (prod <= 14)
		_putchar(' ');
	else
		_putchar((prod / 10) + '0');
	_putchar((prod % 10) + '0');
}
_putchar('\n');
}
}
}
