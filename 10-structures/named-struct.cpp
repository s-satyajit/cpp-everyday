#include <iostream>
using namespace std;

struct car {
    string brand;
    string model;
    int year;
};

int main() {
    car myCar1;
    myCar1.brand = "BMW";
    myCar1.model = "X7";
    myCar1.year = 2025;

    car myCar2;
    myCar2.brand = "Lamborghini";
    myCar2.model = "Hurracan";
    myCar2.year = 2024;

    car myCar3;
    myCar3.brand = "Mercedez";
    myCar3.model = "Benz";
    myCar3.year = 2025;

    cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
    cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";
    cout << myCar3.brand << " " << myCar3.model << " " << myCar3.year << "\n";
}