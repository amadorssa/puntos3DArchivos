//#define mylib.h
//Prototype for functions
#include <string>
//
using namespace std;

void userMenu(int choice);
void generatePoints(int numberOfPoints, double points[][3]);
string readFile(string filename);
void writeFileString(string filename, string content);
void writeFileChar(int numberOfPoints, string filename, double points[][3]);
string replaceChar(string content);
