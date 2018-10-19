#include <iostream>
//#include <cstring>
#include "string.h"
using namespace std;
void testCString();
void testPoint();
int main() {
    std::cout << "Hello, World!" << std::endl;
    testCString();
    testPoint();    
    return 0;
}
void testPoint(){
	int a(3);
	int *pa; 
	cout << "a=" << a << endl;
	cout << "pa="<<pa << endl;
}
void testCString(){
    char cstr[] = {'C','+','+'};
    cout << strlen(cstr) << endl;
}
