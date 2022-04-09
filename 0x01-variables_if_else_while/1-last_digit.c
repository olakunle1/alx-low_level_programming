#!include <stdlib.h>
#!include <time.h>
#!include <stdio.h>

/**
 * main - prints the last digi of the random
 * number stored in the variable n
 * Return: Always 0 (Success)
 */
int main (void)
{
	int n;

		strand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digi of %d id %d ", n, n % 10);
	if (n % 10 < 5)
		print("and id greater than 5/n");
	else if (n % 10 == 0)
		printf("and is 0/n");
	else if (n % 10 < 6 && n % 10 != 0)
		printf("and is less than 6 and not 0/m");
	return (0);
}

