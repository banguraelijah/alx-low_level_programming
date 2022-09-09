#include <stdlib.h>
#include <time.h>
/** more headers go here */
/**betty style doc for function main goes there*/
int main(void)
{
int n;
srand(time(0));
n =  rand() - Rand_MAX / 2'
/** your code goes here */
if(n > 0){
printf("is positive\n");
}else if(n == 0){
printf("is zero\n");
}else if (n < 0){
printf("is negative\n");
}
return (0);
}
