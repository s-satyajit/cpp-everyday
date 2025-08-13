#include <iostream>
#include <set>
using namespace std;

int main() {
    set<string> cars = {"mercedes", "vw", "bmw", "range-rover", "ford"};
    set<string>::iterator it;
    for(auto it = cars.begin(); it != cars.end(); ++it) {
        cout << *it << "\n";
    }
    return 0;
}