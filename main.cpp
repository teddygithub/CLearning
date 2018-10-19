#include <iostream>
//#include <cstring>
#include "string.h"
#include <vector>
using namespace std;
void testCString();
void testPointer();
void testVector();

int main() {
    std::cout << "Hello, World!" << std::endl;
    testCString();
    testPointer();
    testVector();
    cout << INT32_MAX << endl;    
}

void testPointer(){
	int a(3);
	int *pa=&a;
	cout << "a=" << a  << endl;
	cout << "pa="<< pa << endl;
}
void testCString(){
    char cstr[] = {'C','+','+'};
    cout << strlen(cstr) << endl;
}

void testVector(){
    vector<int>  v1(1,1);
    vector<int>  v2(v1);
    vector<int*> v3(1,&v1[0]);
    vector<int*> v4(v3);
    cout << "pa1=" << &v1[0] << endl;
    cout << "pa2=" << &v2[0] << endl;
    cout << "pa3=" << v3[0] << endl;
    cout << "pa4=" << v4[0] << endl;
}