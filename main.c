//programma vichislyaet znacheniya sin v tochke x
#include <stdio.h> //Gubenko Olesya 112
#include <math.h>
#include "headers.h"

int main()
{
	int i=0;
	double x, y, y_true;
	printf("Enter x.\n");
	if (scanf("%lf", &x)!=1)
	{
		printf("Unexpected error.\n");
		return -1;
	}
	y = tailor(x, &i);
	y_true = sin(x);
	printf("x:\t\tTailor res:\tTrue res:\tDelta:\t\tIterations:\n");
	printf("%lf\t%lf\t%lf\t%lf\t%d\n", x, y, y_true, fabs(y_true-y), i);
	return 0;
}
