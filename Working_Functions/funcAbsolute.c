
/*
Function usage example 3.
Author:
        Bruno Godoi Eilliar
Date:
        April 29, 2016.
Notes:
        - To compile run gcc funcAbsolute.c -o funcAbsolute.
        - Find the absolute value of a given number.
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

int main (void)
{
	float f1 = -15.5, f2 = 20.0, f3 = -5.0;
	int i1 = -716;
	float result;

	result = absoluteValue(f1);
	printf ("Result = %.2f\n", result);
	printf ("f1 = %.2f\n", f1);

	result = absoluteValue(f2) + absoluteValue(f3);
	printf ("Result = %.2f\n", result);

	result = absoluteValue( (float) i1);
	printf ("Result %.2f\n", result);

	result = absoluteValue(i1);
	printf ("Result %.2f\n", result);

	printf ("Result %.2f\n", absoluteValue(-6.0)/4);

        return 0;
}

