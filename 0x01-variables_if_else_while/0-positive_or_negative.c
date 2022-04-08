#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - entry poin
 *
 * Return: Always 0 (Success/correct)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
	{
		printf("%1 is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%1 is neagtive\n", n);
	}
	else
	{
		printf("%1 is positive\n", n)
	}
	return (0);
}
