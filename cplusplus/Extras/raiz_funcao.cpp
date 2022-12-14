#include <iostream>
#include <cmath>
#include <cstdlib>
#include <cstdio>
#include <cstring>

using namespace std;

double f(double x){
	return x*x+cos(2*M_PI*x)-sqrt(fabs(x));
}

int main(int argc, char *argv[]){

	double a, b, c, d, e;
	int n;

	// programação defensiva
	if (argc!=3) {
		cout << "Numero de argumentos errado!!!\n" 
             << "\t./raiz_funcao <lim_esq> <lim_dir>\n";
		exit(0);
	}

	a = atof(argv[1]);

//	printf("Digite o limite esquerdo: ");
//	scanf("%lf",&a);
//	//a = 0;

	b = atof(argv[2]);

//	printf("Digite o limite direito: ");
//	scanf("%lf",&b);
//	//b = -0.5;

	if (a>b) {
		printf("Intervalos trocados!!!");
		c = a;
		a = b;
		b = c;
	}

	d = a;
	e = b;

	c = (a + b) / 2;

	while ( fabs(a-b) > 1e-6 ) {
		if (f(a)*f(c) < 0){
			b = c;
			c = (a + b) / 2;
		} else {
			a = c;
			c = (a + b) / 2;
		}
	}
	cout << "A raíz entre os pontos " << d << " e " << e << " com precisão de 0.000001 é " << c << ".\n";

	return 0;
}
