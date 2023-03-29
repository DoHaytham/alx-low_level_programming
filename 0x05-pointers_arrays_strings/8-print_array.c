#include "main.h"
#include <string.h>
/**
* print_array - Function
* Diescription: 'prints n elements of an array of integers, followed
* by a new line.'
* @a : the character
* @n : the character
* Return: Nothing (Success)
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	putchar('\n');
}
