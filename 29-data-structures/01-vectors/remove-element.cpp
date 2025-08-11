#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> cars = {"bmw", "volvo", "mercedez", "ford"};
    cars.pop_back();
    for(string c : cars) {
        cout << c << "\n";
    }
    return 0;
}