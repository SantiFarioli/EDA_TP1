/*                          Ejercicio 5: 
Escriba un fragmento de programa que intercambie (swap) los valores de 3 variables.*/

#include <iostream>
using namespace std;

int main(){
	int n1,n2,n3,aux;
	
	cout<<"Ingrese el valor de n1: ";
	cin>>n1;
	
	cout<<"\nIngrese el valor de n2: ";
	cin>>n2;
	
	cout<<"\nIngrese el valor de n2: ";
	cin>>n3;
	
	cout<<"\nLos valores Son: \n"<<"n1 = "<<n1<<"\nn2 = "<<n2<<"\nn3 = "<<n3<<endl;
	
	
	aux = n1;
	n1 = n2;
	n2 = n3;
	n3 = aux;
	
	
	cout<<"\nLos nuevos valores Son: \n"<<"n1 = "<<n1<<"\nn2 = "<<n2<<"\nn3 = "<<n3;
	
	return 0;
}
