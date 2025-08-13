#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<string> cars = {"mercedes", "vw", "bmw", "range-rover", "ford"};
    sort(cars.begin(), cars.end());
    for(string car : cars) {
        cout << car << "\n";
    }
    return 0;
}