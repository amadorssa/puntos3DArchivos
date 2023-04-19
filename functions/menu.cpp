#include <iostream>
#include <string>
#include "../mylib.h"

using namespace std;

void userMenu(int choice) {

    string filename;
    int numPoints;
    double points[][3] = {{1, 2, 3}, {4, 5, 6}};
    string content;
    string newFilename;
    string newContent;

    switch (choice) {
        case 1: //Crear archivo de datos Geogebra
            
            //Numero de puntos
            cout << "Ingrese la cantidad de puntos que deseas generar: ";
            cin >> numPoints;
            
            //Nombre del archivo
            cout << "Ingresa el nombre del archivo de salida --> ";
            cin >> filename;
            filename = filename + ".txt";
            
            //Funcion generadora
            generatePoints(numPoints, points);

            //Funcion escritora de caracteres
            writeFileChar(numPoints, filename, points);

            cout << "El archivo se ha generado con exito con el nombre " << filename << endl;

            break;
        case 2: // Copiar archivos de datos Math3D

            // Nombre del archivo de lectura
            cout << "Ingresa el nombre del archivo que deseas copiar --> ";
            cin >> filename;
            filename = filename + ".txt";
            content = readFile(filename);

            // Cambiar caracteres
            newContent = replaceChar(content);
            //newContent = content;
            // replaceChar(newContent);

            // Nombre del archivo de salida
            cout << "Ingresa el nombre del archivo de salida --> ";
            cin >> newFilename;
            newFilename = newFilename + ".txt";
            writeFileString(newFilename, newContent);

            cout << endl << "El archivo se copio con exito!" << endl;
            break;
        case 3: //Salir
            cout << "Adios chequetoo!" << endl;
            break;
    }
}
