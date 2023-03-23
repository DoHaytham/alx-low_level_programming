#include <stdio.h>
#include "main.h"

/**
* main - Entry point
* Description: 'prints the alphabet, in lowercase, followed by a new line.'
* Return: Nothing (Success)
*/
void print_alphabet(void)
{
	char c = 'a';
	int i;
	for (i = 0; i < 26; i++)
	{
		_putchar(c);
		c++;
	}

	_putchar('\n');
}
