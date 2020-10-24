// Ejercicio 40
// Calcular el area superficial de S de un prisma con dimensiones l, h, w. En este problema, l = 10, h = 4 yw = 5.2m.

#include <iostream>
using namespace std;

int main() 
{
	float l = 10, h = 4, w = 5.2;
	float S;
	cout << "l (largo):" << l << "\ n";
	cout << "h (alto):" << h << "\ n";
	cout << "w (ancho):" << w << "\ n";
	S = l * h * w;
	cout << "El area superficial es de:" << S << "m." << endl;
    return 0;
}
