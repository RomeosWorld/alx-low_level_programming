#include "main.h"

/**
  * more_numbers - Print 10 times the numbers 0 to 14
  * Return: 10 times of the numbers 0 to 14
  */
void more_numbers(void)
{
	int h, l;

	for (h = 0; h < 10; h++)
	{
		for (l = 0; l <= 14; l++)
		{
			if (l > 9)
			{
				_putchar((l / 10) + '0');
			}

			_putchar((l % 10) + '0');
		}

		_putchar('\n');
	}
}
