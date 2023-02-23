#include "main.h"

/**
 * _isupper - cheack if a letter is upper
 * @c: The number to be cheacked
 * Return: 1 for upper letter or 0 for any thing else
 */

int _isupper(int c);

{
char uppercase = 'A'
int isupper = 0;

for (; uppercase <= 'Z'; uppercase++)
{
if (c == uppercase)
{
isupper = 1;
break;
}
}
return (isupper);
}
