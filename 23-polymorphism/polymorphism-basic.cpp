#include <iostream>
using namespace std;

class Animal {
    public:
    void animalSound() {
        cout << "the animal makes a sound \n";
    }
};

class Pig: public Animal {
    public:
    void animalSound() {
        cout << "the animal says wee wee \n";
    }
};

class Dog: public Animal {
    public:
    void animalSound() {
        cout << "the animal says bow wee \n";
    }
};

int main() {
    Animal myAnimal;
    Pig myPig;
    Dog myDog;

    myAnimal.animalSound();
    myPig.animalSound();
    myDog.animalSound();
}