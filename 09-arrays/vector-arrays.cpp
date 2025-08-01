#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> cars = {"volvo", "tesla", "bmw"};
    cars.push_back("ford");
    for(string car : cars) {
        cout << car << "\n";
    }
}