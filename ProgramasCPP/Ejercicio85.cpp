// Ejercicio 85
// Imprimir la pendiente de la recta con una intercepcion y de (0,10) y un punto (-3,0).

#include <iostream>
using namespace std;

int main () {
	
	float x1 = 0, y1 = 10, x2 = -3, y2 = 0;
	float m;
	cout << "x1:" << x1 << "\n";
	cout << "y1:" << y1 << "\n";
	cout << "x2:" << x2 << "\n";
	cout << "y2:" << y2 << "\n";
	m = (y2 - y1) / (x2 - x1); 
	cout << "La pendiente es:" << m << endl;
    return 0;
}
