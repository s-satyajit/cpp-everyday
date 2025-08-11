#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> cars = {"volvo", "bmw", "ford", "mercedez"};

    // cars.at(1) = "rolls-royce";
    cars[2] = "rolls-royce";

    for(string car : cars) {
        cout << car << "\n";
    }

    return 0;
}