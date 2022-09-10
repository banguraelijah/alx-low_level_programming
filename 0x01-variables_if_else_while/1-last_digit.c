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
printf("%d and is greater than 5\n", n);
else if (last < 6 && last != 0)
printf("%d and is less than 6 and not 0\n", n);
else
printf("%d and is zero\n", n);
return (0);
}
