//bhaskara

#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

using namespace std;

int main(void){

double a, b, c;
double x, y, delta;

cout << "Digite os coeficientes do polinômio de segundo grau para achar as suas raízes: ";

//cin >> a >> b >> c;
scanf("%lf %lf %lf",&a,&b,&c);

delta = b*b-4*a*c;

if (delta>0) {
	x = (-b+sqrt(delta))/(2*a);
	y = (-b-sqrt(delta))/(2*a);
  printf("Raizes reais: %f %f\n",x,y);
} else if (delta==0) {
	x = -b/(2*a);
  printf("Raizes reais: %f\n",x);
} else {
	printf("Raizes complexas.\n");
}

return 0;

}
