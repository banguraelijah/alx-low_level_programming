#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - runs the programe when the code is excuted
 *
 * Return: 0 Always (success)
 */
int main(void)
{
int n;
int last;
srand(time(0));
n = rand() - RAND_MAX / 2;
last = n % 10;
if (last > 5)
printf("%d and is greater than 5\n", n);
else if (last == 0)
printf("%d and d is zero\n", n);
else
printf("%d and is less than 6 and not 0\n");
return (0);
}
