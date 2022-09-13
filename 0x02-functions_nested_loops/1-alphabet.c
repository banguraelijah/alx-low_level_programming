#include "main.h"
/**
 * print_alphabet -function to print abc
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	int letter;
	for (letter = 'a'; letter <= 'z', letter++)
{
	putchar(letter);
}
	putchar('\n');
	return (0);
}
