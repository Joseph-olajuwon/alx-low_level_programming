#include "main.h"

/**
 * reverse_array - reverses an array of intergers
 * @a: array to be reverses
 * @n: number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
