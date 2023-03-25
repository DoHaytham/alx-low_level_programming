#include "main.h"
/**
* print_most_numbers - Function
* Description: 'Multiply two integers'
* Return: Nothing (Success)
*/

void print_most_numbers(void)
{
	char i;

	for (i = 0; i < 10; i++)
	{
		if (i == 2 || i == 4)
			continue;
		_putchar(i + '0');
	}
	_putchar('\n');
}
