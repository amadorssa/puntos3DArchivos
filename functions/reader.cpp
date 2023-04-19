#include <iostream>
#include <fstream>
#include "../mylib.h"
//
using namespace std;

string readFile(string filename) {
    ifstream file(filename);
    string content;
    char caracter;
   
   while (file.get(caracter)) {
        content += caracter;
    }
    
    file.close();
    
    return content;
}