/*                      Ejercicio 4: 
Escriba un programa que tome cada 4 horas la temperatura exterior, ley�ndola durante un 
per�odo de 24 horas. Es decir, debe leer 6 temperaturas. Calcule la temperatura media del d�a, la 
temperatura m�s alta y la m�s baja*/

#include<iostream>

using namespace std;


int main (){

   float temp=0, alta=0, suma=0, baja=1000, media=0;

 

   for(int i=6;i>0;i--){

    cout<<"Temperatura: "; 
	cin>>temp;

    suma=(suma+temp);

 

    if(temp>alta){

    alta=temp;}

 

    if(temp<baja){

    baja=temp;}  

  }

 

   media=(suma/6);

   cout<<"\nTemperatura maxima: "<<alta<<endl;

   cout<<"Temperatura minima: "<<baja<<endl;

   cout<<"Media del dia: "<<media<<endl;

 

   return 0;

}
