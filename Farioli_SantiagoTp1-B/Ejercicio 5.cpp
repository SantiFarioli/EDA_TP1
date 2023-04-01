/*                              Ejercicio 5: 
Escriba un programa que lea valores enteros hasta que se introduzca un valor en el rango 
[20-30] o se introduzca el valor 0. El programa debe entregar la suma de los valores mayores a 0 
introducidos.*/


#include <iostream>
using namespace std;

int main() {
	
	int num, contador=0;
	
	do{
		
		cout<<"Introduce un numero: ";
		cin>>num;
		
		if (num>0){
			contador += num;
		}
		
	}while(num<20 || num>30 && (num!=0)); 
	
	cout<<"\nLa suma de lo valores mayores a cero es: "<<contador;
	
	
	return 0;
}
