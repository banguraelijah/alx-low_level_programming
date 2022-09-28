#include "main.h"

/**
 * power_maths - where the real work in program is done
 * @n: the number
 * @c: iterator
 *
 * Return: square root or -1
 */
int power_maths(int n, int c)
{
	if (c % (c / n) == 0 )
{
	if (c * (c / n) == n)
	return (c);
	else
	return (-1);
}
	return (0 + power_maths (n, c + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n : the number
 *
 * Return: natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (power_maths(n , 2));
}
