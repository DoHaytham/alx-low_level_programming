#include "main.h"
#include <string.h>
/**
* _atoi - Function
* Diescription: 'prints n elements of an array of integers, followed
* by a new line.'
* @s : the character
* Return: Nothing (Success)
*/

int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int i = 0;

	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}

	while (s[i] != '\0' && s[i] >= '0' && s[i] <= '9')
	{
		result = result * 10 + (s[i] - '0');
		i++;
	}

	return (result * sign);
}
