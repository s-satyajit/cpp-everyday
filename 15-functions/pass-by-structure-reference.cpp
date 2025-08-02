#include <iostream>
using namespace std;

struct car {
    string brand;
    int year;
};

void updateYear(car &c) {
    c.year++;
}

int main() {
    car myCar = {"bmw", 2025};
    updateYear(myCar);
    cout << myCar.brand << " : " << myCar.year;
    return 0;
}