
/*
Function usage example 3.
Author:
        Bruno Godoi Eilliar
Date:
        April 29, 2016.
Notes:
        - To compile run gcc funcAbsolute.c -o SQR_Newton.
*/

#include <stdio.h>

float absoluteValue (float x)
{
        if (x<0)
	{
		x = -x;
	}
	return x;
}

float squareRoot (float x)
{
	const float epsilon = .00001;
	float guess = 1.0;

	while (absoluteValue(guess * guess -x) >= epsilon)
	{
		guess = (x / guess + guess) /2.0;
	}

	return guess;
}

int main (void)
{
	printf("SquareRoot (2.0) = %.2f\n", squareRoot(2.0));
	printf("SqaureRoot (144.0) = %.2f\n", squareRoot(144.0));
	printf("SquareRoot (17.5) = %.2f\n", squareRoot(17.5));

	return 0;
}
