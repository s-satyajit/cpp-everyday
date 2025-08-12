#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<string> cars;
    cars.push("mercedez");
    cars.push("bmw");
    cars.push("vw");
    cars.push("rolls-royce");
    cars.push("ford");
    cars.push("tesla");

    cout << cars.front() << "\n";
    cout << cars.empty() << "\n";
    cars.pop();
    cout << cars.front() << "\n";
    cout << cars.size();
    return 0;
}