#include <stdio.h>

/**
 * main - print numbers from 1 to 100 but for multiples of 3 print Fizz
 * for multiples of 5 print Buzz for multiples of 3 and 5 print FizzBuzz
 *
 * Return: always 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
{
	if (i % 3 == 0 && i % 5 != 0)
{
	printf("Fizz");
}
	else if (i % 5 == 0 && i % 3 != 0)
{
	printf("Buzz");
}
	else if (i % 3 == 0 && i % 5 == 0)
{
	printf("FizzBuzz");
	printf("%d", i)
}
	else
{
	printf("%d", i);
}
}
printf('\n');
return (0);
}
