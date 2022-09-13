#include "main.h"
/**
 * print_alphabet_x10 - print lower case alphabet by 10
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int a = 0;
	char letter;

	while (a <= 10)
{
	for (letter = 'a'; letter <= 'z'; letter++)
{
	_putchar(letter);
}
}
_putchar('\n');
}
