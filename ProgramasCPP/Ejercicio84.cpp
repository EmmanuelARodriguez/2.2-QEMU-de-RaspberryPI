// Ejercicio 84
// Determinar la ecuación de la recta descrita por la pendiente 3 y el punto sobre la recta (8, -4)

#include <iostream>
using namespace std;

int main () {
	
	float x1 = 8, y1 = -4;
	float m = 3;
	cout << "x1:" << x1 << "\n";
	cout << "y1:" << y1 << "\n";
	cout << "pendiente:" << m << "\n";
	cout << "La ecuación es:" << m << "X - Y +" << ((m * x1) + y1) << endl;
    return 0;
}
