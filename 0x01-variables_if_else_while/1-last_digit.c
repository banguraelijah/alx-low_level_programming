#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Print if the number is positive, negative or zero
 *
 * Return: 0 when ever the cod is excuted
 */
int main(void)
{
int n;
int last;
srand(time(0));
n = rand() - RAND_MAX / 2;
last = n % 10;
if (last > 5)
printf("and is greater than 5");
else if (last == 0)
printf("and is zero\n");
else
printf("and is less than 6 and not 0\n", n);
return (0);
}
