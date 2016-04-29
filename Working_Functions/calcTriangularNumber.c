/*
Function usage example 2.
Author:
	Bruno Godoi Eilliar
Date:
	April 18, 2016.
Notes:
	-To compile run gcc calcTriangularNumber.c -o calcTriangularNumber
*/

#include <stdio.h>

void calculateTriangularNumber (int n)
{
	int i, triangularNumber = 0;

	for (i = 1 ;i <= n; i++)
	{
		triangularNumber += 1;
	}

	printf ("Triangular number %i is %i.\n", n, triangularNumber);
}

int main (void)
{
	calculateTriangularNumber(10);
	calculateTriangularNumber(20);
	calculateTriangularNumber(50);

	return 0;
}
