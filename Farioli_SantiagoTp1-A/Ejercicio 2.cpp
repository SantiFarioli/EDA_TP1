
/*                       Ejercicio 2: 
Escribe un programa que lea de la entrada estándar el precio de un producto y muestre 
en la salida estándar, el precio del producto al aplicarle el IVA*/



#include <iostream>
using namespace std;

int main(){
	
	int producto;
	int resultado;
	
	cout<<"Ingrese el precio de su producto: "<<endl;
	cin>>producto;
	resultado=producto*1.21;
	
	cout<<"\nEl precio de su producto con IVA es: "<<resultado;
				
	
	return 0;
}
