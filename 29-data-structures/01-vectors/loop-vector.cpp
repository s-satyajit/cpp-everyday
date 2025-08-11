#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> cars = {"volvo", "bmw", "mercedez", "rolls-royce", "ford"};
    for(int i = 0; i < cars.size(); i++) {
        cout << cars[i] << "\n";
    }
    return 0;
}