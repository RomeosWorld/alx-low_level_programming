#include <stdio.h>
#include <time.h>
/**
 * main - print if number is positive, is negative or 0
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
	{
		printf("%d is zero\n");
	}
	else if (n < O)
	{
	printf("%d is negative\n");
	}
	else
	{
		printf("%d is positive\n");
	}
	return (0);
}
