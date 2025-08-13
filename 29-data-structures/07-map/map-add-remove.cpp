#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, int> cars = {{"mercedes", 2020}, {"bmw", 2025}, {"ferrari", 2020}};
    cars["mercedes"] = 2022;
    cars["ford"] = 2019;
    cars.insert({"vw", 2023});
    cars.insert({"rolls-royce", 2025});
    cars.erase("ford");
    cars.erase({"vw", 2023});
    cout << cars.size() << "\n";
    for(auto car : cars) {
        cout << car.first << " : " << car.second << endl;
    }
    cout << "if cars is empty: " << cars.empty() << endl;
    cout << cars.empty() << endl;
    cars.clear();
    cout << "if cars is empty: " << cars.empty() << "\n";
    return 0;
}