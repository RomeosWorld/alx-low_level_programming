#include "main.h"

/**
  * print_most_numbers - Print the numbers since 0 up to 9
  * Description: Prints the numbers excluding 2 and 4
  * Return: The numbers since 0 up to 9
  */
void print_most_numbers(void)
{
	int g = 0;

	for (g <= 9; g++)
	{
		if (g == 2 || g == 4)
		{
			continue;
		}
		else
		{
			_putchar(g + '0');
		}
	}

	_putchar('\n');
}

