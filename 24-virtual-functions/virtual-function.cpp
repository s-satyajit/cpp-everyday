#include <iostream>
using namespace std;

class Animal {
    public:
    virtual void sound() {
        cout << "animal sound \n";
    }
};

class Dog : public Animal {
    public:
    void sound() {
        cout << "dog barks \n";
    }
};

int main() {
    Animal* a;
    Dog d;
    a = &d;
    a->sound();
    return 0;
}