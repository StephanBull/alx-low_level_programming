#include <stdio.h>
#include <stdlib.h>

/**
 * main - print all single digit numbers
 *
 * Return: (0)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		printf("%d", num);
	}
	printf("\n");
	return (0);
}
