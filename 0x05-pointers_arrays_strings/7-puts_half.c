#include "main.h"
#include <string.h>
/**
* puts_half - Function
* Diescription: 'prints half of a string, followed by a new line.'
* @str : the character
* Return: Nothing (Success)
*/

void puts_half(char *str)
{
	int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	int start = length / 2;

	if (length % 2 == 1)
	{
		start = (length - 1) / 2 + 1;
	}

	int i;

	for (i = start; i < length; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
