#include <stdio.h>
#include "main.h"

/**
 * more_numbers - print 10 times the numbers from 0 to 14
 */
void more_numbers(void)
{
	int num, count;

	for (count = 0; count < 10; count++)
{
	for (num = 0; num < 15; num++)
{
	if (num >= 10)
	_putchar((num / 10) + '0');
	_putchar((num % 10) + '0');
}
_putchar('\n');
}
}
