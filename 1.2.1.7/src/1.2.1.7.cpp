//============================================================================
// Name        : 8.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout << "ingrese tres valores: " << endl;
	double a,b,c;
	string triangulo;
	cin >> a >> b >> c;



	if (a == b && b == c){

	   triangulo = "equilatero";
	}
	else if ((a == b && c != a) || (c == b && c != a )|| (b == a && b != c) || (a==c && a!=b)){

	   triangulo = "isoceles";


	}else if ( a != b && b !=c && c!=a){

	   triangulo = "escaleno";
	}

	cout << "es un triangulo: " << triangulo << endl;

	return 0;
}
