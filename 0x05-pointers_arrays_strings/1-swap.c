#include "main.h"

/**
 * swap_int - swaps the value of a and b
 * @a: First int to be swapped
 * @b: Second int to be swapped
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int l;

	l = *a;
	*a = *b;
	*b = l;
}
