/*                                Ejercicio 7: 
Escriba un programa que lea de la entrada estándar los dos catetos de un triángulo 
rectángulo y escriba en la salida estándar: A) perímetro y superficie y B) su hipotenusa.*/

#include <iostream>
#include <math.h>
using namespace std;

int main(){
	
	int co,ca,hipotenusa,perimetro,area;
	
	cout<<"Ingrese valor cateto opuesto: ";
	cin>>co;
	
	cout<<"Ingrese valor cateto adyasente: ";
	cin>>ca;
	
	hipotenusa = sqrt (pow(co,2) + pow(ca,2));
	perimetro = co+ca+hipotenusa;
	area = ca*co/2;
	
	cout<<"\nLa hipotenusa es: "<<hipotenusa;
	cout<<"\nEl perimetro es: "<<perimetro;
	cout<<"\nEl area es: "<<area;
			
	
	return 0;
}

