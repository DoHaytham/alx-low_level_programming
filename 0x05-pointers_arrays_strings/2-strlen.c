#include "main.h"
#include <string.h>
/**
* _strlen - Function
* Description: 'returns the length of a string'
* @s : the character
* Return: Nothing (Success)
*/

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
