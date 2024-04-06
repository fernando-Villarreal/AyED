//============================================================================
// Name        : helloWorld.cpp
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

   int suma;
   int resta;
   int producto;
   double cociente;

   suma = a + b;
   resta = a - b;
   producto = a*b;
   cociente = (double)a/b; //aceptando que b es distinto que 0

   cout << "la suma es: " << suma << endl;
   cout << "la resta es: " << resta << endl;
   cout << "el producto es: " << producto << endl;
   cout << "el cociente es: " << cociente << endl;





	return 0;
}
