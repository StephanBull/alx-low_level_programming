#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* More headers goes there */

/* betty style doc for function main goes there */
/**
 * main -  Print a randomn number to a variabe
 *
 * Written by Julien Berbie
 * Edtied by Mr. Bull
 *
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
	return (0);
}
