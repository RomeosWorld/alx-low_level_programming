#include "main.h"

/**
  * print_numbers - Print the numbers since 0 up to 9
  * Return: The numbers since 0 up to 9
  */
void print_numbers(void)
{
	int f;

	for (f = 0; f <= 9; f++)
	{
		_putchar(f + '0');
	}

	_putchar('\n');
}
