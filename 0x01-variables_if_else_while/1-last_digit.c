#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Runs the code each time it is excuted
 *
 * Return: 0 always(success)
 */
int main(void)
{
int n, last;
srand(time(0));
n = rand() - RAND_MAX / 2;
last = n % 10;
if (last > 5)
printf("Last digit of n: %d is %d and is greater than 5\n", n, last);
else if (last == 0)
printf("Last digit of n: %d is %d and is zero\n", n, last);
else
printf("Last digit of n: %d is %d and is less than 6 and not 0\n", n, last);
return (0);
}
