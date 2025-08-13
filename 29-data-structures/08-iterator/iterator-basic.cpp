#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> cars = {"ferrari", "mercedes", "bmw", "vw", "range-rover"};
    vector<string>::iterator it;

    for(auto it = cars.begin(); it != cars.end(); ++it) {
        cout << *it << "\n";
    }
    return 0;
}