/*                                  Ejercicio 1: 
Realice un programa que solicite de la entrada est�ndar un entero del 1 al 10 y muestre en 
la salida est�ndar su tabla de multiplicar. Use un men� para elegir varias tablas diferentes a elecci�n.*/

#include <iostream>
using namespace std;

int main(){
	
	int num;
	
	cout<<"Ingrese un numero del 1 al 10 para conocer la Tabla de dicho elemento: ";
	cout<<"\n Tabla del 1 ";
	cout<<"\n Tabla del 2 ";
	cout<<"\n Tabla del 3 ";
	cout<<"\n Tabla del 4 ";
	cout<<"\n Tabla del 5 ";
	cout<<"\n Tabla del 6 ";
	cout<<"\n Tabla del 7 ";
	cout<<"\n Tabla del 8 ";
	cout<<"\n Tabla del 9 ";
	cout<<"\n Tabla del 10 ";
	cout<<"\n Opciones: ";
	cin>>num;
	cout<<"\n";
		
	
	switch(num){
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:	
			for(int i=1;i<=10;i++){
			cout<<num<<" X "<<i<<" = "<< num * i<<endl;
		}
			break;		
}
	
	
	
	
	
	return 0;
}
