#include <iostream>
#include "mylib.h"

using namespace std;

int main() {

    int choice = 0;

    cout << "Selecciona una de las siguientes opciones" << endl;
    cout << "\t(1) Crear archivo de datos (Geogebra)" << endl;
    cout << "\t(2) Copiar archivo de datos (Math3D)" << endl;
    cout << "\t(3) Salir" << endl;

    do {
        cout << "Ingrese una opción: ";
        cin >> choice;
    } while (choice < 1 || choice > 3);

    userMenu(choice);
    
    return 0;
}