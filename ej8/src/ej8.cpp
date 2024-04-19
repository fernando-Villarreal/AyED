//============================================================================
// Name        : ej8.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
   cout << "ingrese un numero de 8 digitos como fecha: " << endl;
      int a;
      cin >> a;

      int anio = a/10000;
      int dia = a%100;

      int numero = a/100;

      int mes = numero%100;

      cout << "anio "<< anio << endl;
       cout << "mes "<< mes << endl;
      cout << "dia "<< dia << endl;
	return 0;
}
