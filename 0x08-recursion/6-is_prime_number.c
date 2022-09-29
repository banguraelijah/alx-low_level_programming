#include "main.h"

/**
 * prime_number - checks for prime number
 * @n: the prime number
 * @i: checks the numbers if prime
 *
 * Return: depends on the statement
 */
int prime_number(int n, int i)
{
	if (i == 1)
	return (1);
	if (n % i == 0 && i > 1)
	return (0);
	return (prime_number(n, i - 1));
}
/**
 * is_prime_number - check if a number is prime
 * @n: the number to check for
 *
 * Return: depends on statement
 */
int is_prime_number(int n)
{ 
	if (n <= 1)
	return (0);
	return (prime_number(n, n - 1));
}
