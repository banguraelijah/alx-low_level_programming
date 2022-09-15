#include "main.h"

/**
 * _isupper - checks for uppercase character.
 * @c: the int var that is used
 *
 * Return: 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	return (1);

	else
		return (0);
}
