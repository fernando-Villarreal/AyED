//============================================================================
// Name        : ejer_6_again.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
   cout << "Ingrese 3 valores diferentes entre si: " << endl;
      int a,b,c;
      cin >> a >> b >> c;


      int mayor = a;
      int medio = a;
      int menor = a;

        if (a > b && a > c && b > c ){
           mayor = a;
           medio = b;
           menor = c;
        }
        else if (a > b && a > c && a < c ){
                     mayor = a;
                     medio = c;
                     menor = b;
                  }
        else if (b > a && b > c && a > c ){
                mayor = b;
                medio = a;
                menor = c;
             }
        else if (b > a && b > c && a > c ){
                     mayor = b;
                     medio = a;
                     menor = c;
                  }
        else if (b > a && b > c && a < c ){
                         mayor = b;
                         medio = c;
                         menor = a;
                      }
        else if (c > a && c > b && a > b ){
                         mayor = c;
                         medio = a;
                         menor = b;
                      }
        else if (c > a && c > b && a < b ){
                       mayor = c;
                       medio = b;
                       menor = a;
       }

      cout << "el mayor es: " << mayor << endl;
      cout << "el menor es: " << menor << endl;
      cout << "el medio es: " << medio << endl;
	return 0;
}
