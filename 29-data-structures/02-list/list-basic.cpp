#include <iostream>
#include <list>
using namespace std;

int main() {
    list<string> cars = {"volvo", "bmw", "vw", "rolls-royce", "mercedez", "ford"};
    cout << cars.front() << endl;
    cout << cars.back() << endl;
    return 0;
}