#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int, greater<int>> num = {89, 2, 95, 74, 9, 23, 56, 3, 29, 34, 91};
    for(int n : num) {
        cout << n << "\n";
    }

    cout << "____________________________" << "\n";
    
    set<string, greater<string>> cars = {"mercedez", "bmw", "bmw", "vw", "rolls-royce", "ferrari", "ford", "tesla"};
    // set stores only unique elements, even if we write bmw twice, it will only show one in the output
    for(string car : cars) {
        cout << car << "\n";
    }
    return 0;
}