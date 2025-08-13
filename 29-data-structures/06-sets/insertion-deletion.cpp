#include <iostream>
#include <set>
using namespace std;

int main() {
    set<string, greater<string>> cars = {"tesla", "ferrari", "ford", "vw"};
    cars.insert("bmw");
    cars.insert("toyota");
    cars.insert("rolls-royce");
    cars.insert("ford");

    cars.erase("tesla");
    cars.erase("ferrari");
    cars.erase("vw");

    for(string car : cars) {
        cout << car << "\n";
    }
    cout << "size of the set: " << cars.size() << "\n";
    cout << "if the set is empty: " << cars.empty() << "\n";
    return 0;
}