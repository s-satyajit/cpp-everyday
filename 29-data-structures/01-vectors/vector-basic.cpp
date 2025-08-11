#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> cars = {"volvo", "bmw", "ford", "mercedez"};

    for(string car : cars) {
        cout << car << "\n";
    }

    cout << cars.front()<< " ";
    cout << cars.back() << endl;

    cout << cars[0] << " ";
    cout << cars[3] << endl;

    cout << "<<<<<<<<<<<<<<<<<<<<<<\n";

    cout << cars.at(1);
    cout << cars.at(3);


    return 0;
}