#include <iostream>
#include <list>
using namespace std;

int main() {
    list<string> cars = {"mercedez", "bmw", "volvo", "toyota", "vw", "ford"};
    for(string car : cars) {
        cout << car << "\n";
    }
    return 0;
}