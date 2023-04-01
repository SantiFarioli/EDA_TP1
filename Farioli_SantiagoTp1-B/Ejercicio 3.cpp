/*                                 Ejercicios 3: 
Realice un programa que calcule y muestre en la salida estándar, la suma de los cuadrados 
de los 10 primeros enteros mayores que cero. Mostrar un mensaje de invalidez, si ingresa un negativo.*/

#include <iostream>
#include <math.h>
using namespace std;

int main(){
	
	int num, cuadrado,total,i =1;
	
	do{
		cout<<"Igrese un numero entero: ";
		cin>>num;
		i++;
		cuadrado = pow(num,2);
		
		total += cuadrado;
		
		if(num<0){
			cout<<"\nNumero invalido!!!\n";
		}
		
		
	}while(i<=10);
    	
        

    cout << "\nLa suma de los cuadrados de los 10 primeros enteros mayores que cero es: " << total;

	
	
	
	return 0;
	
}
