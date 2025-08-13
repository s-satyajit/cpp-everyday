#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> cars = {"mercedes", "vw", "bmw", "range-rover", "ford"};
    vector<string>::iterator it;
    for(auto it = cars.rbegin(); it != rend(); ++it) {
        cout << *it << "\n";
    }
    return 0;
}