#include <iostream>
#include <string>
#include "../mylib.h"

using namespace std;

string replaceChar(string content) {
    replace(content.begin(), content.end(), '{', '[');
    replace(content.begin(), content.end(), '(', '[');
    //replace(content.begin(), content.end(), ' ', '_');
    replace(content.begin(), content.end(), ')', ']');
    replace(content.begin(), content.end(), '}', ']');
    return content;
}