#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> cars = {"volvo", "bmw", "ford", "mercedez"};
    cars.push_back("rolls-royce");
    for(string car : cars) {
        cout << car << "\n";
    }
    return 0;
}