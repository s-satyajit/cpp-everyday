#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, int> cars = {{"ferrari", 2022}, {"vw", 2020}, {"mercedes", 2020}, {"ford", 2019}, {"bmw", 2025}};
    cout << "ryan bought mercedes in: " << cars.at("mercedes") << "\n";
    cars["ferrari"] = 2018;
    cout << "sam bought ferrari in: " << cars["ferrari"];
    return 0;
}