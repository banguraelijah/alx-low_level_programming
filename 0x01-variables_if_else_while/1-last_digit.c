#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - called whenever the c programe is excuted
 *
 * Return: 0 when ever the programe is excuted correctly
 */
int main(void)
{
int n, last;
srand(time(0));
n = rand() - RAND_MAX / 2;
last = n % 10;
if (last > 5)
printf("%d and is greater than 5\n", n);
else if (last < 6 && != 0)
printf("%d and is less than 6 and not 0\n", n);
else
printf("%d and is zero", n);
return (0);
}
