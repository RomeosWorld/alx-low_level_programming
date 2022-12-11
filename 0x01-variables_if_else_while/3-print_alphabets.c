#include <stdio.h>
/**
 * main - lowercase and uppercase printing
 * Return: Always zero
 */
int main(void)
{
	char lu;

	for (lu = 'a'; lu <= 'z'; lu++)
		putchar(lu);

	for (lu = 'A'; lu <= 'Z'; lu++)
		putchar(lu);

	putchar('\n');

	return (0);
}
