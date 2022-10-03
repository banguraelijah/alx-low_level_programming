#include <unistd>

/**
 * _putchar - writes the character c to stdout
 * @c: the character to write
 *
 * Return: on success 1
 * On error, - 1 is returned and an error message is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
