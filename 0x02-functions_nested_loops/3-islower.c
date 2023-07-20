#include "main.h"

/**
 * _islower - Looks for lowercase
 * @c: Character to be checked
 * Return: 1 for lowercase and 0 for anything else
 */

int _islower(int c)
{

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
