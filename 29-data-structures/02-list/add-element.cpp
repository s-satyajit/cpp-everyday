#include <iostream>
#include <list>
using namespace std;

int main() {
    list<string> cars = {"volvo", "bmw", "vw", "rolls-royce", "mercedez", "ford"};
    cars.push_front("tesla");
    cars.push_back("toyota");
    cout << cars.front() << "\n";
    cout << cars.back();
    return 0;
}