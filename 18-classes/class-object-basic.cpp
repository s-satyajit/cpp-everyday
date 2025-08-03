#include <iostream>
using namespace std;

class Car {
    public:
    string brand;
    string model;
    int year;
};

int updateYear(Car &c) {
    return c.year+1;
}

int main() {
    Car carObj1;
    carObj1.brand = "BMW";
    carObj1.model = "X7";
    carObj1.year = 2025;

    Car carObj2;
    carObj2.brand = "Ford";
    carObj2.model = "Mustang GT";
    carObj2.year = 2025;

    cout << carObj1.brand << " : " << carObj1.model << " : " << carObj1.year << "\n";
    cout << carObj2.brand << " : " << carObj2.model << " : " << carObj2.year << "\n";

    Car carObject3 = {"Mercedez", "Benz", 2025};

    int update = updateYear(carObject3);
    cout << update << "\n";
    return 0;
}