#include "main.h"
#include <string.h>
/**
* print_rev - Function
* Description: 'prints a string, in reverse, followed by a new line.'
* @s : the character
* Return: Nothing (Success)
*/

void print_rev(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	for (int i = length - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
