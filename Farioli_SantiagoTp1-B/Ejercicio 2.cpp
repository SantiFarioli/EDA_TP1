/*                                    Ejercicio 2: 
Realice un programa que lea de la entrada est�ndar n�meros hasta que se introduzca un 
cero. En ese momento el programa debe terminar y mostrar en la salida est�ndar el n�mero de valores 
le�dos mayores que cero. Usar una estructura do-while*/

#include <iostream>
using namespace std;

int main(){
		
	
	int num;
    int contador = 0;
    
    
    cout << "Introduzca un numero: ";
    cin>>num;
    
    do{
    	contador++;
    	cout << "Introduzca un numero: ";
        cin >> num;
	}while (num != 0);
        
    
    cout << "La cantidad de numeros mayores a cero son: " << contador << std::endl;
	
	
	return 0;
}
