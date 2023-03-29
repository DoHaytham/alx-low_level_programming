#include "main.h"
#include <string.h>
/**
* puts2 - Function
* Diescription: 'prints every other character of a string, starting with 
* the first character, followed by a new line.'
* @str : the character
* Return: Nothing (Success)
*/

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			putchar(str[i]);
		}
		i++;
	}
	putchar('\n');
}
