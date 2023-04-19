#include <iostream>
#include <string>
#include "../mylib.h"

using namespace std;

string replaceChar(string content) {
    replace(content.begin(), content.end(), '{', '[');
    replace(content.begin(), content.end(), '(', '[');
    replace(content.begin(), content.end(), ' ', '\0');
    replace(content.begin(), content.end(), ')', ']');
    replace(content.begin(), content.end(), '}', ']');
    return content;
}