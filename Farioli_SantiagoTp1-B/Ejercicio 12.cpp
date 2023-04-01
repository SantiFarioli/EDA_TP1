/*                           Ejercicio 12: 
Hacer un programa que calcule el resultado de la siguiente expresión: 1-2+3-4+5-6...n*/

#include <iostream>
#include <conio.h>
using namespace std;


int main()
{
	int numero, suma, resta;


	cout<< "Ingrese el numero de elementos a sumar: ";
	cin>>numero;

	
	for (int i = 1; i <= numero; i+=2) {
		suma += i;
	}

	for (int i = 0; i <= numero; i += 2) {
		resta -= i;
	}
	
	cout << "\nLa suma total es: " <<suma + resta<<endl;

	getch();
	
	return 0;
}

