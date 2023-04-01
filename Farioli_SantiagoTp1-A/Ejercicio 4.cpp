/*								Ejercicio 4: 
 Haga un programa que tenga como entrada una cantidad de dinero en pesos argentinos,
y su salida será el monto convertido a dólares. Tome la cotización actual de dólar blue, redondear a 
2 cifras.*/


#include <iostream>
using namespace std;

int main(){
	
	float pesos, dolar;
	
	cout<<"Ingrese su cantidad de dinero en pesos Argentinos: ";
	cin>>pesos;
	
	dolar = pesos/205,26;
	
	cout.precision(2);
	cout<<"\nLa cantidad de su dinero en dolar es: "<<dolar;
	
	
	
	return 0;
}
