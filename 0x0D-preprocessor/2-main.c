#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the name of the file it was compiled from,
 * followed by a new line
 *
 * Return: 0 ON SUCCESS
 */
int main(void)
{
	printf("%s\n", _FILE_);
	return (0);
}
