/*                      Ejercicio 7:
A-Escriba un programa que calcule usando un while, el valor de: 1 + 2 + 3 +...+ n. */

#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	
	int num,suma;
	
	
	cout<<"Ingrese un numero: ";
	cin>>num;
	
	
	int i=1;
	
	while(i<=num){
		
		suma +=i;
		i++;
		
	}
	
	cout<<"\nLa Suma es: "<<suma;
	
	
	
	getch();
	
	return 0;
}
