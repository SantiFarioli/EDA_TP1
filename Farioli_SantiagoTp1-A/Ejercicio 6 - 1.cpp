/*                      Ejercicio 6.1: 
Haga un programa en donde se ingresará una cantidad X de segundos, para luego 
convertir a horas, minutos y segundos.*/

#include <iostream>
using namespace std;

int main(){
	
	int hs,min,seg,cantseg;
	
	cout<<" Ingrese cantidad de segundos: ";
	cin>>cantseg;
	
	hs = cantseg/3600;
	cantseg %=3600;
	min = cantseg / 60;
	seg = cantseg % 60;
	 
	cout<<"\nCantidaad de tiempo total: "<<endl;
	cout<<"Horas: "<<hs<<endl;
	cout<<"Minutos: "<<min<<endl;
	cout<<"Segundos: "<<seg<<endl;
	
	
	
	
	return 0;
}
