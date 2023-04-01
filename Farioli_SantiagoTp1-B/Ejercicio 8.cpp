/*                              Ejercicio 8:
En una clase de 5 alumnos se han realizado 3 exámenes, y se requiere determinar según se 
elija una opción el número de: a) Alumnos que aprobaron todos los exámenes. b) Alumnos que 
aprobaron al menos un examen. c) Alumnos que aprobaron únicamente el último examen.*/

#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	
	int select,nota1,nota2,nota3,todos=0,ultimo=0,uno=0;
 
 
	for(int i=1;i<=5;i++){
		cout<<"Introduce nota 1: "; cin>>nota1;
		cout<<"Introduce nota 2: "; cin>>nota2;
		cout<<"Introduce nota 3: "; cin>>nota3;
		cout<<"\n";
		
		if((nota1>=5) && (nota2>=5) && (nota3>=5)) {
			todos++;				
    	}
    	
    	if((nota1>=5) || (nota2>=5) || (nota3>=5)){
			       uno++;			
    	}
    	
    	if((nota1<5) && (nota2<5) && (nota3>=5)){
			       ultimo++;
		}
    
 }
		cout<<"        OPCIONES: "<<endl;
		cout<<"1 - Alumnos que aprobaron todos los examenes?"<<endl;
		cout<<"2 - Alumnos que aprobaron al menos uno?"<<endl;
		cout<<"3 - Alumnos que aprobaron unicamente el ultimo?"<<endl;
		cin>>select;
		
		
		switch(select){
			case 1:			
		        cout<<todos<<" Alumnos aporbaron todos los examenes!"<<endl;
		        break;
		    
		    case 2:
		    		        
		        cout<<uno<<" Alumnos aporbaron al menos uno!"<<endl;
		        break;
					    
			case 3:	    					        
		        cout<<uno<<" Alumnos aporbaron el ultimo!"<<endl;
		        break; 
}
				


 
	getch();
	
	return 0;
}
