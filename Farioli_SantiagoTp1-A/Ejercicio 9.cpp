/*                           Ejercicio 9: 
Escriba un programa que ingrese nombre y tiempo de nado de dos nadadoras. Luego
determine y muestre cuál de ellas llego primero.*/

#include <iostream>
using namespace std;

int main(){
	
	char nom1[10],nom2[10];
	int tiempo1,tiempo2;
	
	cout<<"Ingrese Nombre nadadora N° 1: ";
	cin>>nom1;
	cout<<"Ingrese tiempo de nado: ";
	cin>>tiempo1;
	
	cout<<"\nIngrese Nombre nadadora N° 2: ";
	cin>>nom2;
	cout<<"Ingrese tiempo de nado: ";
	cin>>tiempo2;
	
	
	if(tiempo1>tiempo2){
		cout<<"\nNadadora: "<<nom2<<" llego primero con un tiempo de: "<<tiempo2;
		} else if(tiempo1==tiempo2){
			cout<<"\nEmpate";
			}else{			
				cout<<"\nNadadora: "<<nom1<<" llego primero con un tiempo de: "<<tiempo1;
		    }
		
	
	return 0;
}

