/*                       Ejercicio 7:
B-Escriba un programa que calcule usando un for, el valor de: 1 + 3 + 5 +...+ 2n-1*/


#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	
	int num,suma;
	
	
	cout<<"Ingrese un numero: ";
	cin>>num;
	
	
    for(int i = 1;i<=num;i++){
    	suma += 2*i-1;
	}
	
	cout<<"\nLa Suma es: "<<suma;
	
	
	
	getch();
	
	return 0;
}
