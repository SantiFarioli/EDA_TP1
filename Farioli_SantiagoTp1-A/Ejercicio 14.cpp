/*                     Ejercicio 14: 
Realice un programa que calcule el valor que toma la siguiente función para unos
valores dados de x e y: f(x,y) = vx/
y^2-1 */

#include <iostream>

using namespace std;

int main()
{
    float x, y;
    cout << "Ingrese x: ";
    cin >> x;
    cout << "Ingrese y: ";
    cin >> y;
    cout << "El valor de la funcion es: " << ((sqrt(x,2)) / (pow(y, 2) - 1)) << endl;
    return 0;
}
