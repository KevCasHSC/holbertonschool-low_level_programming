#include "holberton.h"
#include <stdio.h>

/**
 * swap_int -  Reset a number whith 98 value
 * @a : Pointer to int. adress variable to reset
 * @b : Desc.
 * Return:  void
 * On error, -1 is returned, and errno is set appropriately.
 */

void swap_int(int *a, int *b)

{
int k = 9;
k = *a;
*a = *b;
*b = k;
}
