/*                                  Ejercicio 10: 
Escriba un programa que lea de la entrada est�ndar el nombre de una persona en un 
arreglo de caracteres. Adem�s, pide el a�o de nacimiento, y determina su edad en a�os cumplidos*/

#include <iostream>
using namespace std;

int main(){
	
	int anio,edad,fechaActual;
	char nombre[20];
	
	
	cout<<"Ingrese su nombre: ";
	cin.getline(nombre,20,'\n');
	
	cout<<"Ingres su anio de nacimiento: ";
	cin>>anio;
	
	cout<<"Ingres fecha actual: ";
	cin>>fechaActual;
	
	edad = fechaActual-anio;
	
	cout<<"\nSus datos son: "<<"\nNombre: "<<nombre<<"\nAnio de nacimiento: "<<anio<<"\nEdad : "<<edad;
	
	
	return 0;
}
