//============================================================================
// Name        : Ejercicio_3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout << "Ingrese un valor numerico entero" << endl;
	int num;
	cin >> num;
	double quintaP;
	int resto;
	double septimaP;

	quintaP = (double)num/5;
	resto = num%5;
	septimaP = quintaP/7;

	cout << "la quinta parte del numero es: " << quintaP <<endl;
   cout << "el resto de divir por 5 es: " << resto <<endl;
   cout << "la septima parte de la quinta parte ingresada es: " << septimaP <<endl;

	return 0;
}
