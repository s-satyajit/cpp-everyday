#include <iostream>
using namespace std;

class Dog {
    void bark();
};

void Dog::bark() {
    cout << "Woof!";
}

int main() {
    Dog myDog;
    myDog.bark();
    return 0;
}