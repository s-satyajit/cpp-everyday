#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> cars = {"mercedes", "vw", "bmw", "range-rover", "ford"};
    vector<string>::iterator it;
    for(auto it = cars.begin(); it != cars.end();) {
        if(*it == "vw") {
            it = cars.erase(it);
        } else {
            ++it;
        }
    }
    for(const string& car : cars) {
        cout << car << "\n";
    }
    return 0;
}