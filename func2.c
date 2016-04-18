/*
Function usage example 3.
Author:
	Bruno Godoi Eilliar
Date:
	April 18, 2016.
Notes:
	- To compile run gcc func2.c -o func2.
	- Find the greatest commom divisor of two nonnegative integer values.
*/

#include <stdio.h>

void gcd (int u, int v)
{
	int temp;

	printf("The  gcd of %i and %i is ", u, v);

	while (v != 0)
	{
		temp = u % v;
		u = v;
		v = temp;
	}

	printf("%i.\n", u);
}

int main (void)
{
	gcd(150, 35);
	gcd(1026, 405);
	gcd(83, 240);

	return 0;
}
