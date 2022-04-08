//functsiya vichislyaet znacheniye sin v tochke x summirovaniyem ryada tailora
#include <stdio.h>

#define epsilon 0.001

double fabs(double x) { //Gubenko Olesya 112
	return x>0? x: -x;
}


double tailor(double x, int *i) //Gubenko Olesya 112
{
	double s=0, an=x, nov=1, old=0;
	int n=1;
	while (fabs(an)>epsilon) {
		s+=an;
		n++;
		an*=-x*x/(2.0*n-1.0)/(2.0*n-2.0);
		*i+=1;
	}
	return s;
}

