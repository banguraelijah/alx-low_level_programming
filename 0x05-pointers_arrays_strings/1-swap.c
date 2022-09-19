#include "main.h"

/**
 *swap_int - swaps the value of integres
 * @a: int to swap
 * @b: int to swap
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int a;

	a = *a;
	*a = *b;
	*b = a;
}
