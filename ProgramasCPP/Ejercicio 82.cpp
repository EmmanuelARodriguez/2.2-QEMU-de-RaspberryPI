// Ejercicio 82
// Determinar la ecuación de la recta que pasa por los puntos (0, -2) y (-68, -15).

#include <iostream>

int main () {

      doble x1 = 0, x2 = -68, y1 = -2, y2 = -15;
			doble m;
			std :: cout << "x1:" << x1 << "\ n";
			std :: cout << "y1:" << y1 << "\ n";
			std :: cout << "x2:" << x2 << "\ n";
			std :: cout << "y2:" << y2 << "\ n";
			m = (y2 - y1) / (x2 - x1);
			std :: cout << "La ecuación es:" << m << "X - Y +" << ((m * x1) + y1) << std :: endl;
    return 0;
}