// Ejercicio 83
// Determinar la ecuación de la recta que pasa por los puntos (56,16) y (-40,1).

#include <iostream>
using namespace std;

int main () {

      doble x1 = 56, y1 = 16, x2 = -40, y2 = 1;
			doble m;
			cout << "x1:" << x1 << "\ n";
			cout << "y1:" << y1 << "\ n";
			cout << "x2:" << x2 << "\ n";
			cout << "y2:" << y2 << "\ n";
			m = (y2 - y1) / (x2 - x1);
			cout << "La ecuación es:" << m << "X - Y +" << ((m * x1) + y1) << endl;
    return 0;
}
