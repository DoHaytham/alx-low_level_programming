#include "main.h"
#include <string.h>
/**
* _strcpy - Function
* Diescription: 'prints n elements of an array of integers, followed
* by a new line.'
* @dest : the character
* @src : the character
* Return: Nothing (Success)
*/

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
