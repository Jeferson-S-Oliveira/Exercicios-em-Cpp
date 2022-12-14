//número primo
#include <iostream>
#include <list>

using namespace std;

int main(void){

int n;
int lista [30];

/*
.Definição: um número primo é aquele dividido por ele mesmo e por um, ou seja, tem dois divisores.

.Vamos utilizar o método crivo de Eratóstenes:

-> O número um tem apenas um divisor, então ele não é primo.

-> Números pares não podem ser primos porque, além de terem como divisores um e eles mesmo, têm mais um divisor que é o dois.

-> Sabemos que 2, 3, 5, 7 e 11 são primos e já podem ser catalogados de antemão. Todavia, os múltiplos desses números não são primos. Note ainda que não há múltiplos de 11, logo terminamos o crivo.
*/

//append.lista (2,3,5,7)

cout << 2 << " "<< 3 << " " << 5 << " " << 7 << " " << 11 << " ";

// Acho mais fácil instânciar um comando que inclua selecione os múltiplos, ou seja, os que são divisíveis e diga para realizar uma instrução só se o número não for divisível.

 for (n =12; n < 1000; ++n){ 

  if (n%2 == 0 || n%3 == 0 || n%5 == 0 || n%7 == 0) {

  } else
  
  	//lista.insert(n);
	
	cout << n << " ";
  
 }
 
 cout << "\n";
 
return 0;

}
