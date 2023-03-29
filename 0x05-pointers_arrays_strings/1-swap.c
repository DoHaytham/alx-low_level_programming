#include "main.h"
/**
* swap_int - Function
* Description: 'swaps the values of two integers'
* @a : first integer
* @b : second integer
* Return: Nothing (Success)
*/

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

