#include <iostream>
using namespace std;

class myClass {
    public:
    void myMethod();
};

void myClass::myMethod() {
    cout << "Hello World!\n";
}

int main() {
    myClass myObj;
    myObj.myMethod();
    return 0;
}