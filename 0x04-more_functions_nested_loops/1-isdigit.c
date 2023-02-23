#include "main.h"

/**
 * _isdigit - cheak if a character is a digit
 * @n: the number to be cheacked
 * Return: 1 for a charracter that will be a digit or 0 for else
 */

int _isdigit(int c);
{

	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	return (0);
}
