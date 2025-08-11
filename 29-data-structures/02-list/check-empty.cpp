#include <iostream>
#include <list>
using namespace std;

int main() {
    list<string> cars = {"mercedez", "bmw", "volvo", "toyota", "vw", "ford"};
    cout << cars.empty();
    return 0;
}