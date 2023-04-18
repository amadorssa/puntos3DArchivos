#include <iostream>
#include <fstream>
#include "../mylib.h"


using namespace std;

void writeFileString(string filename, string content) {
    ofstream file(filename);
    
    if (file.is_open()) {
        for (char caracter : content) {
            file << caracter;
        }
        file.close();
    }
    else {
        cout << "No se pudo abrir el archivo para escritura." << endl;
    }
}


void writeFileChar(int numberOfPoints, string filename, double points[][3]) {
    ofstream file(filename);
    
    if (file.is_open()) {
        for (int i = 0; i < numberOfPoints; i++) {
            file << "(" << points[i][0] << "), (" << points[i][1] << "), (" << points[i][2] << ")" << endl;
        }
    }
    else {
        cout << "No se pudo abrir el archivo para escritura." << endl;
    }
    file.close();
}