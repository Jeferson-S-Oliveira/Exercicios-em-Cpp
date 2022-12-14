// números_primos_v.2
#include <iostream>
using namespace std;

int main(void){

int c = 1, n = 3, d;
double resto;
int lista[30];
lista [0] = 2;

	while (c < 30){
		for (d = 2; d < n; ++d){
			resto = n % d;
			if (resto == 0){
				break;
			}
		}
		if (resto != 0){
			//cout << n << " ";
			lista [c] = n;			
			c += 1;
		}
		n +=2;
	}
	for (c =0; c < 30 ; ++c){
	cout << lista[c] << " ";
	}
 	cout << "\n";
return 0;
}
