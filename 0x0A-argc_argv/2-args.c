#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments it recives
 * @argc: void
 * @argv: an array that hold the string values entered on the command line
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
{
	printf("%s\n", argv[i]);
}
	return (0);
}
