/*                             Ejercicio 13: 
Hacer un programa que muestre la serie Fibonacci, mostrando sus elementos desde el 
1..hasta n. Ej.: si n=13, nos muestra la salida: Fibonacci(13)= 1 1 2 3 5 8 13*/


#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	
	int num, x=0, y=1,z=1;
	
	cout<<"Digite un numero: ";
	cin>>num;
	
	cout<<"1 ";
	for(int i=1;i<=num;i++){
		z = x + y;
		cout<<z<<" ";
		x = y;
		y = z;
	}
	
	
	getch();
	
	return 0;
}
