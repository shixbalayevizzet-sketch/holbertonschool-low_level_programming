#include <stdio.h>   /* printf üçün */
#include <stdlib.h>  /* rand, srand, RAND_MAX üçün */
#include <time.h>    /* time() üçün */
/**
 * main - prints whether a random number is positive, zero, or negative
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("%d is ", n);
	if (n > 0)
		printf("positive\n");
	else if (n == 0)
		printf("zero\n");
	else
		printf("negative\n");

	return (0);
}
