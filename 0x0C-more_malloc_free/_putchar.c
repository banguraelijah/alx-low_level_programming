#include <unistd>

/**
 * _putchar - writes char c to stdout
 * @c: the character to write
 *
 * Return: on success 1
 * on error, -1 and an error message is set approprately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
