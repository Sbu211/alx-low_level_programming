#include " main.h"



/**
 * _islower - name of the prototype
 * @c : an input character
 *
 * Description: _islower  checks if characater c is lower case
 *
 * Return: 1 if c  is lower case or 0 is upper case
 */


int _islower(int c)

{
	char i;
	int lower = 0

	for (i = 'a'; i <= 'z', i++)
	{
		if (i == c)
		lower = 1;
	}



	return (lower);




}
