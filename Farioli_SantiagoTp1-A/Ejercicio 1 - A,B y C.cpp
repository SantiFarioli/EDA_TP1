#include <iostream>
using namespace std;

/*                             Ejercicio 1:
A) Haga un programa que permita la entrada de datos, ingresando el nombre y apellido del 
usuario, además debe mostrar el nombre_completo por pantalla. (considera los espacios)
B) Ejemplifique, como se coloca un comentario de una o varias líneas.
C) Como se baja un renglón al mostrar algo por pantalla, nombre alternativas.*/


int main() {
	
char nom[10],ape[10];


cout<<"Ingrese su nombre"<<endl;
cin>>nom;

cout<<"Ingrese su apellido"<<endl;
cin>>ape;


cout<<"\nSu nombre completo es: "<<nom<<" "<<ape;
	
//Soy un comentario de una linea

/*Soy un comentario
de muchas lineas 
yupi!!!*/	

// Un renglon se baja mediante \n o endl;	
	return 0;
}
