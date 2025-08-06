#include <iostream>
using namespace std;

class Car {
    public:
    string brand;
    string model;
    int year;
    Car(string x, string y, int z) {
        brand = x;
        model = y;
        year = z;
    }

    Car() {
        brand = "unknown";
        model = "unknown";
        year = 0;
    }
};

int main() {
    Car carObj1 = {"BMW", "X7", 2025};
    Car carObj2("Mercedez", "G-wagon", 2025);
    Car carObj3;

    cout << carObj1.brand << " : " << carObj1.model << " : " << carObj1.year << "\n";
    cout << carObj2.brand << " : " << carObj2.model << " : " << carObj2.year << "\n";
    cout << carObj3.brand << " : " << carObj3.model << " : " << carObj3.year << "\n";

    return 0;
}