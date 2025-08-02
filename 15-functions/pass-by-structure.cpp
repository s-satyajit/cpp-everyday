#include <iostream>
using namespace std;

struct car {
    string brand;
    int year;
};

void myFunction(car c) {
    cout << "Brand: " << c.brand << ", Year: " << c.year;
}

int main() {
    car myCar = {"bmw", 2025};
    myFunction(myCar);
    return 0;
}