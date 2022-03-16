#include "main.h"


/**
 * print_sign -  name of the function
 * @n: is the the number
 * Description: Return 1 and + if positive,0 if zero and -1 and - if negative
 * Return: 1 if positive and 0
 */

int print_sign(int n)
{
	int value;

	if (n > 0)
	{

		value = 1;
		_putchar('+');
	}

	else if (n == 0)
	{
		value = 0;
		_putchar('0');
	}

	else
	{
		value = -1;
		_putchar('-');
	}

	return (value);







}
