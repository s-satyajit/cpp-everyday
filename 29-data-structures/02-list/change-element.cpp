#include <iostream>
#include <list>
using namespace std;

int main() {
    list<string> cars = {"volvo", "bmw", "vw", "rolls-royce", "mercedez", "ford"};
    cars.front() = "front_element\n";
    cars.back() = "back_element";
    cout << cars.front();
    cout << cars.back();
    return 0;
}