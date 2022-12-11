#include <stdio.h>
/**
 * main - printing of lower alphabets
 * Return: Always 0
 */
int main(void)
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
	{
		putchar(la);
	}
	putchar('\n');
	return (0);
}
