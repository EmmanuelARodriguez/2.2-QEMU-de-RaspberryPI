// Ejercicio 84
// Determinar la ecuación de la recta descrita por la pendiente 3 y el punto sobre la recta (8, -4)

#include <iostream>

int main () {

      doble x1 = 8, y1 = -4;
			doble m = 3;
			std :: cout << "x1:" << x1 << "\ n";
			std :: cout << "y1:" << y1 << "\ n";
			std :: cout << "pendiente:" << m << "\ n";
			std :: cout << "La ecuación es:" << m << "X - Y +" << ((m * x1) + y1) << std :: endl;
    return 0;
}