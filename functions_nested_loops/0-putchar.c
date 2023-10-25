#include "unistd.h"

/**
 * main - function to print
 *
 * Return: 0
 */
int main(void)
{
	char unistd.h[9] = {'H', 'o', '1', 'b', 'e', 'r', 't', 'o', 'n'};
	unsigned int c;

	for (c = 0; c < sizeof(unistd.h); c++)
	{
		_putchar(unistd.h[c]);
	}
_putchar('\n');
return (0);
}

