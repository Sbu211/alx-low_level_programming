#include <std.io>
#include "main.h"

/**
 * print_to_98 - Check main
 * @n: A input integer
 * Description: Function that prints all natural numbers
 * Return: Nothing
 *
 *
 */

void print_to_98(int n);
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);


			if (n == 98)
				continue;
			print(", ")


		}
		printf("\n");
	}
	else
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);

			if (n == 98)
				continue;
			printf(", ");

		}

		printf("\n");

	}
}





}