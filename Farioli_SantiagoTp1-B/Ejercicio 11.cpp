/*                  Ejercicio 11: 
Escriba un programa que calcule el valor de: 2^1+2^2+2^3+...+2^n*/

#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main() {
	
	int num, suma,elevado;
	
	cout<<"Digite un numero: ";
	cin>>num;
	
	for(int i = 1; i<=num;i++){
		elevado = pow(2,i);
		suma +=elevado;
		
	}
	
	
	cout<<"El valor es: "<<suma;
	
	getch();
	
	return 0;
}
