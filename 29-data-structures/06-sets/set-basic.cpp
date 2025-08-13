#include <iostream>
#include <set>
using namespace std;

int main() {
    set<string> cars = {"volvo", "bmw", "mercedez", "ford", "rolls-royce", "range-rover", "ferrari"};
    for(string car : cars) {
        cout << car << "\n";
    }
    return 0;
}