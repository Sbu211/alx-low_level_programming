#include "main.h"

/**
 * _isalpha - Check main
 * @c : can be character that is upper case or lower case
 * Description: function returns 1 if character is a
 * letter, lowercase or uppercase
 * Return: 1 if its a character and 0 otherwise
 */

int _isalpha(int c)
{
	char lower, upper;
	int isletter = 0;


	for (lower = 'a'; lower <= 'z'; lower++)
	{

		for (upper = 'A'; upper <= 'Z'; upper++)
		{
			if (c == lower || c == upper)
			isletter = 1;

		}

	}


	return (isletter);
}
