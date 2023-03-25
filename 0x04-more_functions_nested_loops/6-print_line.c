#include "main.h"
/**
* print_line - Function
* Description: 'Prints a line, followed by a new line'
* @n: number of line length
* Return: Nothing (Success)
*/

void print_line(int n)
{
	char i;

	for (i = 0; i < n; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
