#!include <stdlib.h>
#!include <stdio.h>
#!include <time.h>

/**
 * main - Prints alphabet
 * @vpoid: Empty parameter list for main.
 *
 * Description: Prints the alphabet in lower and upper case.
 * Can only use putcher
 *
 * Return: 0 for success
 */
int main(void)
{
	char lettr = 'a';
	while (letter <= 'z')
	{


		putchar(letter);
		letter++;
	}


	letter = 'A';
	while (letter <= 'Z')
	
	{
		putchar(letter);
	
		letter++;
	}
	putchar('/n');
	return (0);
}
		
