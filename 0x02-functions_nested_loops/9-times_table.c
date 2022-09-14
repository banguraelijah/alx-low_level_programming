#include "main.h"
/**
 * times_table - prints the 9 times table
 * Return: 0
 */
void times_table(void)
{
	int n1 = 9;
	int n2 = 1;
	int times_table;

	for (n2 = 1; n2 <= 12; n2++)
{
	times_table = n1 * n2;
	_putchar(times_table);
}
_putchar('\n');
}
