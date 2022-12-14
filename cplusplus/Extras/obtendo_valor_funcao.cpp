#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

double f(double x) { // f(x)
	return x*x + cos(2*M_PI*x) - sqrt(fabs(x));
}

int main(void) {

	double x;

	for ( x=-1; x<=1; x+=0.1 ) {
		printf("%.3lf\t%.3lf\n",x,f(x));
	}

	return 0;
} // use ./program -> saída.txt
