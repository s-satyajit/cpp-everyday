#include <iostream>
#include <list>
using namespace std;

int main() {
    list<string> cars = {"mercedez", "bmw", "volvo", "toyota", "vw", "ford"};
    cars.pop_front();
    cars.pop_back();
    cout << cars.front() << "\n";
    cout << cars.back();
    return 0;
}