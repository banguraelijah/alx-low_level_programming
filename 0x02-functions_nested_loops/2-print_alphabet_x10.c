#include "main.h"
/**
 * print_alphabet_x10 - print lower case alphabet by 10
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char a, letter;

	for (a = 0; a <= 9; a++)
{
	for (letter = 'a'; letter <= 'z'; letter++)
{
	_putchar(letter);
}
	_putchar('\n');
}
}
