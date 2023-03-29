#include "main.h"
#include <string.h>
/**
* _puts - Function
* Description: 'prints a string, followed by a new line, to stdout'
* @str : the character
* Return: Nothing (Success)
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
