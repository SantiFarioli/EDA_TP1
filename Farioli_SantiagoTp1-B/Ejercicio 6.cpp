/*                                Ejercicio 6: 
Escriba un programa que calcule num^exp, donde tanto num como exp son enteros positivos, 
sin utilizar la funci�n pow. Donde num ser� una base generada de forma aleatoria entre 2 y 42, y exp
ser� ingresada por teclado no mayor a 5. Usar las librer�as stdlib.h y cmath*/

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <cmath>
#include <conio.h>

using namespace std;

int main(){
	
 
 int x, y=x,i=1,resultado=1;
 
 srand(time(NULL));

 
 x = 2 + rand() % (43 - 1);
 cout<<x;
 
 cout<<"\nIntroduzca el exponente: "; cin>>y;
 
 for(i;i<=y;i++){
 resultado*=x;
 }
 
 cout<<"\nEl resultado es: "<<resultado<<endl;
 
 getch();
	
	
	
	
	return 0;
}
