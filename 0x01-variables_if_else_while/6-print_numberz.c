#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print digits with putchar
 *
 * Return: (0)
 */
int main(void)
{
	int num;

	for (0; num < 10; num++)
	{
		putchar(num + '0');
	}
	putchar('\n');
	return (0);
}
