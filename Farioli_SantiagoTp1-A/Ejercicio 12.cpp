/*                           Ejercicio 12
Escriba un programa que calcule las soluciones de una ecuaci�n de segundo grado de
la forma ax^2 + bx + c = 0, teniendo en cuenta que: f(a,b,c) =-b+v(b^2-4ac)/
2a */

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float a=0, b=0, c=0;
    cout << "Introduce a: ";
    cin >> a;
    cout << "Introduce b: ";
    cin >> b;
    cout << "Introduce c: ";
    cin >> c;
    cout << "Soluciones: " << (-b + sqrt(b*b - 4*a*c))/(2*a) << " y " << (-b - sqrt(b*b - 4*a*c))/(2*a) << endl;
}
