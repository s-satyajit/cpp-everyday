#include <iostream>
using namespace std;

class MyClass {
    public:
    void myFunction() {
        cout << "some content in parent class!\n";
    }
};

class MyOtherClass: public MyClass {
    public:
    void myOtherFunction() {
        cout << "some content in other class!\n";
    }
};

int main() {
    MyOtherClass myObj;
    myObj.myFunction();
    myObj.myOtherFunction();
    return 0;
}