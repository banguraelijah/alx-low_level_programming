#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply two numbers
 * @argc: number of arguments passed
 * @argv:  an array that holds the string values entered onthe command line
 *
 * Return: 0 on success
 * On error, 1
 */
int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc != 3)
{
	printf("Error\n");
	return (1);
}
	for (i = 0; i < argc; i++)
{
	printf("%d\n", mul);
	mul = mul * atoi(argv[i]);
}
return (0);
}
