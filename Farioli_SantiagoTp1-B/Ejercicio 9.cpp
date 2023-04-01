/*                            Ejercicio 9: 
Escriba un programa que calcule el valor de: 1 * 2 * 3 *...* n (factorial) */

#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	
	int num, fac= 1;
	
	cout<<"Ingrese un numero: ";
	cin>>num;
	
	for(int i= 1;i<=num;i++){
		fac *= i;
	}
	
	cout<<"\nEl factoria de "<<num<<" es: "<< fac;
	
	
	
	getch();
	
	return 0;
}
