#include <stdio.h>

/**
 * swap_int - swap the values of the two integers
 * @a: the first interger to be swapped
 * @b: the second interger to be swapped
 * Return: nothing
 */

void swap_int(int *a, int *b)
/*the function that swaps the two intergers.*/

{
	int temp = *a;

	*a = *b;
	*b = temp;
}
