#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9, followed by a new line.
 * main - runs all the functions
 *
 * Return: always 0
 */
void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
{
	_putchar("%d", i);
}
	_putchar('\n');
}
