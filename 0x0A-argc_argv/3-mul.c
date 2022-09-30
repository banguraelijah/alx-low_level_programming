#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - a programe that multiplies two numbers
 * @argc: number of arguments passed
 * @argv: an array that holds the string values entered on the command line
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	(void)argc;
	if (argc != 3)
{
	printf("Error\n");
	return (1);
}
	printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
