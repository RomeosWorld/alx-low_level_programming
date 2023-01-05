#include "main.h"

/**
 * factiorial - returns a factorial of an integer
 * @n: Given number
 * Return: Factorial of n
 */
int factorial(int n);
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
		return (1);
	return (n * factorial(n -1));
}
