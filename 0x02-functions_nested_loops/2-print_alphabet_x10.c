#include "main.h"
#include <stdio.h>

/**
 * print_alphabet-printsalphabets
 *
 * Description: Prints alphabets in lower case
 *
 * Returns: Nothing
 */



void print_alphabet(void)
{
	printf("abcdefghijklmnopqrstuvwxyz\n");

}



/**
 * print_alphabet_x10 - name of the function
 *
 * Description: Prints alphabet 10 x
 *
 * Returns: Nothing
 */

void print_alphabet_x10(void)

{

	int i;

	for (i = 0; i < 10; i++)

		print_alphabet();
}
