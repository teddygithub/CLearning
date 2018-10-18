#include <iostream>
//#include <cstring>
#include "string.h"
using namespace std;
void testCString();

int main() {
    std::cout << "Hello, World!" << std::endl;
    testCString();
    return 0;
}

void testCString(){
    char cstr[] = {'C','+','+'};
    cout << strlen(cstr) << endl;
}