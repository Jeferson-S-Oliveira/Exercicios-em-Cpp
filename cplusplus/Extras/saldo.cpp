//Saldo positivo ou negativo
#include <iostream>
#include <string>
using namespace std;

int main(){

// variáveis:

double gasto, ganho, x;

cout << "Por favor, insira o seu ganho semanal: ";

cin >> ganho;

cout << "\nAgora insira o seu gasto semanal: ";

cin >> gasto;

x = ganho - gasto;

if (x > 0){

cout << "\nSeu saldo é positivo e seu valor é " << x << " \n";

}

else if (x < 0){

cout << "\nSeu saldo é negativo e seu valor é " << x << " \n";

}

else{

cout << "\nSeu saldo é nulo.\n";

}

return 0;

}
