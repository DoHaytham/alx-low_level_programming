#include <stdio.h>
#include "main.h"
/**
* main - Entry point
* Description: ''
* Return: Always 0 (Success)
*/


int main(void)
{
	print_alphabet();
	return (0);
}


/**
* main - Entry point
* Description: 'prints the alphabet, in lowercase, followed by a new line.'
* Return: Nothing (Success)
*/
void print_alphabet(void)
{
	char c = 'a';
	int i;
	for (i = 0; i < 26; i++)
	{
		putchar(c);
		c++;
	}

	putchar('\n');
}
