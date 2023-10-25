#include "unistd.h"

/**
 * main - function to print
 *
 * Return: 0
 */
int main(void)
{
	char holberton[9] = {'H', 'o', '1', 'b', 'e', 'r', 't', 'o', 'n'};
	unsigned int c;

	for (c = 0; c < sizeof(holberton); c++)
	{
		_putchar(holberton[c]);
	}
_putchar('\n');
return (0);
}

