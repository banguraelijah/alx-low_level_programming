#include "main.h"

/**
 * _pow_recursion - take y power of x
 * @x: the number
 * @y: the power
 *
 * Return: if y < 0 = -1 else x * _pow_recursion(x,y -1)
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	return (-1);
	else if (y == 0)
	return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
