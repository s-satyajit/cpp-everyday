#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<string> cars = {"mercedes", "vw", "bmw", "range-rover", "ford"};
    deque<string>::iterator it;
    for(auto it = cars.begin(); it != cars.end(); it++) {
        cout << *it << "\n";
    }
    return 0;
}