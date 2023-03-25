#include "main.h"
/**
* print_diagonal - Function
* Description: 'Prints a diagonal, followed by a new line'
* @n: number of line length
* Return: Nothing (Success)
*/

void print_diagonal(int n)
{
	char i;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
	{
		char j;

		j = 0;

		while (j < i)
		{
			_putchar(' ');
			j++;
		}
		_putchar('\\');
		_putchar('\n');
	}
}
