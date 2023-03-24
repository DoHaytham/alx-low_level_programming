#include "main.h"
/**
* _isupper - Function
* Description: 'checks for uppercase character'
* @c: The character to check
* Return: Nothing (Success)
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);

}

