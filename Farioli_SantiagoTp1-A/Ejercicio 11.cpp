/*                            Ejercicio 11: 
Escribe un programa que lea de la entrada estándar dos números y muestre en la salida 
estándar su suma, resta, multiplicación y división*/

#include <iostream>
using namespace std;

int main(){
	
	float n1,n2,suma,resta,mul,div;
	
	cout<<"Ingrese un numero: ";
	cin>>n1;
	
	cout<<"Ingrese otro numero: ";
	cin>>n2;
	
	suma = n1+n2;
	resta = n1-n2;
	mul = n1*n2;
	div = n1/n2;
	//cout.precision(3);
	
	cout<<"\nLa suma de los dos numero es: "<<suma<<endl;
	cout<<"\nLa resta de los dos numero es: "<<resta<<endl;
	cout<<"\nLa multiplicacion de los dos numero es: "<<mul<<endl;
	cout<<"\nLa division de los dos numero es: "<<div<<endl;
			
	
	return 0;
}
