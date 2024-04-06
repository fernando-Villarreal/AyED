//============================================================================
// Name        : Ejercicio_2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
   int a;
   int b;

      cout << "ingrese dos valores numericos enteros" << endl;
      cin >> a;
      cin >> b;

   double cociente;

    if (b != 0){

       cociente = (double)a/b;
       cout << "el cociente es: " << cociente << endl;
    }
    else {
       cout << "b es cero, por ende no existe solucion" << endl;
    }



	return 0;
}
