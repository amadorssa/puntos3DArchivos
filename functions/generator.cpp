#include <iostream>
#include <fstream>
#include <cmath>
#include <random>
#include "../mylib.h"
//
using namespace std;

void generatePoints(int numberOfPoints, double points[][3]) {
    random_device rd; 
    mt19937 gen(rd());
    uniform_real_distribution<double> dis(-10.0, 10.0);

    const double radio = 1.0; // Radio de la esfera

    for (int i = 0; i < numberOfPoints; i++) { // Generar 20 puntos en la esfera
        double x = dis(gen); // Generar una coordenada x aleatoria entre -1 y 1
        double y = dis(gen); // Generar una coordenada y aleatoria entre -1 y 1
        double z = dis(gen); // Generar una coordenada z aleatoria entre -1 y 1

        double norma = sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2)); // Calcular la norma del vector (x, y, z)
        x = radio * x / norma; // Escalar la coordenada x al radio de la esfera
        y = radio * y / norma; // Escalar la coordenada y al radio de la esfera
        z = radio * z / norma; // Escalar la coordenada z al radio de la esfera

        points[i][0] = x; // Almacenar coordenadas x en el arreglo
        points[i][1] = y; // Almacenar coordenadas y en el arreglo
        points[i][2] = z; // Almacenar coordenadas z en el arreglo

    }
}
