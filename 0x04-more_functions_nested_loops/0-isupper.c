#include <stdio.h>
#include "main.h"

/**
* main - Entry point
* Description: 'checks for uppercase character'
* Return: Nothing (Success)
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);

}
