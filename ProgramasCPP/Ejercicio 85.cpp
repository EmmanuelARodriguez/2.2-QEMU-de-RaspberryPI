// Ejercicio 85
// Imprimir la pendiente de la recta con una intercepcion y de (0,10) y un punto (-3,0).

#include <iostream>

int main () {

      doble x1 = 0, y1 = 10, x2 = -3, y2 = 0;
			doble m;
			std :: cout << "x1:" << x1 << "\ n";
			std :: cout << "y1:" << y1 << "\ n";
			std :: cout << "x2:" << x2 << "\ n";
			std :: cout << "y2:" << y2 << "\ n";
			m = (y2 - y1) / (x2 - x1); 
			std :: cout << "La pendiente es:" << m << std :: endl;
    return 0;
}