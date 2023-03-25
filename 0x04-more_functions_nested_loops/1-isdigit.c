#include "main.h"
/**
* _isdigit - Function
* Description: 'checks for a digit'
* @c: The digit to check
* Return: Nothing (Success)
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);

}

