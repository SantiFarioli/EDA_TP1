/*                                    Ejercicio 8: 
La calificaci�n final de un estudiante es la media ponderada de tres notas: la nota de 
pr�cticas que cuenta un 30% del total, la nota te�rica que cuenta un 60% y la nota de participaci�n 
que cuenta el 10% restante. Escriba un programa que lea de la entrada est�ndar las tres notas de 
un alumno y escriba en la salida est�ndar su nota final. Permita ingresar por teclado N, la cantidad 
de alumnos a calificar. */


#include <iostream>
using namespace std;

int main(){
	
	float practicas,teorica,participacion, notaFinal;
	int alu;
	
	cout<<"Ingrese cantidad de alumnos a calificar: ";
	cin>>alu;
	
	cout<<"Ingrese la nota de parctica: ";
	cin>>practicas;
	
	cout<<"Ingrese la nota de teorico: ";
	cin>>teorica;
	
	cout<<"Ingrese la nota de participacion: ";
	cin>>participacion;
	
	practicas *= 0.30;
	teorica *= 0.60;
	participacion *= 0.10;
	
	notaFinal = practicas + teorica +participacion;
	
	cout<<"\nNota final de los "<<alu<<" alumnos es: "<<notaFinal;
	cin>>notaFinal;
	
}
