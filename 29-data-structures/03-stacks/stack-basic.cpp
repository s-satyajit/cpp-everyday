#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<string> cars;
    cars.push("volvo");
    cars.push("mercedez");
    cars.push("bmw");
    cars.push("vw");
    cars.push("ford");
    cars.push("rolls-royce");

    cout << cars.top() << "\n";
    cars.pop();
    cout << cars.top() << "\n";
    cout << cars.empty() << "\n";
    return 0;
}