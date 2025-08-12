#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<string> cars;
    cars.push("mercedez");
    cars.push("bmw");
    cars.push("vw");
    cars.push("ford");
    cars.push("tesla");

    cout << cars.front() << "\n";
    cout << cars.back() << "\n";
    cars.front() = "rolls-royce";
    cars.back() = "toyota";
    cout << cars.front() << "\n";
    cout << cars.back() << "\n";
}