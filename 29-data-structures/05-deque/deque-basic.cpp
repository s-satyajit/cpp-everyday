#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<string> cars = {"volvo", "tesla", "mercedez", "vw", "bmw"};
    cout << cars[0] << "\n";
    cout << cars.at(4) << "\n";
    cout << cars.at(2) << "\n";
    cars.at(2) = "ferrari";
    cout << cars.at(2) << "\n";
    cout << "____________________________________" << "\n";
    cout << cars.front() << "\n";
    cout << cars.back() << "\n";
    cars.push_front("ferrari");
    cars.push_back("rolls-royce");
    for(int i = 0; i < cars.size(); i++) {
        cout << cars.at(i) << "\n";
    }
    cout << "_______________________________________" << "\n";
    cars.pop_front();
    cars.pop_back();
    for(string car : cars) {
        cout << car << "\n";
    }
    cout << cars.empty() << "\n";
    return 0;
}