/*                                6.2 
Modifique el programa que pida valores enteros para hora, otra para minutos, y otra para
segundos, como resultado lo transforma y muestra el total a cantidad de segundos*/

#include <iostream>
using namespace std;

int main(){
	
	int hs,min,seg,segTotal;
	
	cout<<"Ingrese horas: ";
	cin>>hs;
	
	cout<<"Ingrese minutos: ";
	cin>>min;
	
	cout<<"Ingrese segundos: ";
	cin>>seg;
	
		
	hs= hs*60*60;
	min = min*60;
	
	segTotal = hs+min+seg;
	
	cout<<"\nCantidad de segundos totales: "<<segTotal;
	
	return 0;
}
