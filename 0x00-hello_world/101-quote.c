#include <unistd.h>
/**
 * main - Entry point
 * Description: 'This program prints the sizes of ome data types'
 * Return: Always 1 (Success)
 */
int main(void)
{
char *message = "and that piece of art is useful\" - \
		 Dora Korpar, 2015-10-19\n";
write(STDERR_FILENO, message, 38);
return (1);
}
