/*                             Ejercicio 10:
Escriba un programa que calcule el valor de: 1! +2! + 3! + ... + n! (suma de factoriales)*/

#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	
	int num, fac= 1, suma;
	
	cout<<"Ingrese un numero: ";
	cin>>num;
	
	for(int i= 1;i<=num;i++){
		fac *= i;
		suma += fac;
	}
	
	cout<<"\nEl factoria de "<<num<<" es: "<< fac;
	cout<<"\nResultado con suma: "<<suma;
	
	
	
	getch();
	
	return 0;
}
