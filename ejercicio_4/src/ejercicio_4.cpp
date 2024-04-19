//============================================================================
// Name        : ejercicio_4.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout << "Ingrese dos valores numericos enteros diferentes entre si" << endl;
	int num1;
	int num2;
	cin >> num1;
	cin >> num2;
	int mayor;

	if (num1 != num2){
	   if (num1 > num2){
	      cout << "el numero mayor es: " << num1 << endl;
	   }else{
	      cout << "el numero mayor es: " << num2 << endl;
	   }
	}else{
	   cout << "los numeros son iguales"<< endl;
	}


	return 0;
}
