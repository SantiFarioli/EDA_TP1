/*                   Ejercicio  3.1:
Realice un programa que lea de la entrada estándar los siguientes datos de una 
persona: Edad: dato de tipo entero. Sexo: dato de tipo carácter. Altura en metros: dato de tipo 
real. Tras leer los datos, el programa debe mostrarlos en la salida estándar
								3.2 
Ejecute el programa del ejercicio anterior con entradas erróneas y observe los resultados. Por 
ejemplo, introduzca un dato de tipo carácter cuando se espera un dato de tipo entero*/

#include <iostream>
using namespace std;

int main(){
	int edad;
	char sexo[10];
	float altura;
	
	cout<<"Ingrese su edad: ";
	cin>>edad;
	
	cout<<"Ingrese su su sexo: ";
	cin>>sexo;
	
	cout<<"Ingrese su altura: ";
	cin>>altura;
	
	cout<<"\nSus datos ingresados son: "<<endl;
	cout<<"Edad: "<<edad<<endl;
	cout<<"Sexo: "<<sexo<<endl;
	cout<<"Altura: "<<altura;
		
	
	return 0;
} 
