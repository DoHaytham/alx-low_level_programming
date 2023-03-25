#include "main.h"
/**
* more_numbers - Function
* Description: 'Multiply two integers'
* Return: Nothing (Success)
*/

void more_numbers(void)
{
	char i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j >= 10)
			{
				_putchar(j / 10 + '0');
			}
			_putchar(j % 10 + '0');
		}
	_putchar('\n');
	}
}
