#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: This program assigns a random number to the variable n
 *              and prints whether it is positive, negative, or zero.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;

srand(time(0)); /* Seed the random number generator with the current time */
n = rand() - RAND_MAX / 2; /* Generate random number shift to desired range */
printf("%d is ", n);
if (n > 0)
{
printf("positive\n");
}
else if (n < 0)
{
printf("negative\n");
}
else
{
printf("zero\n");
}
return (0);
}
