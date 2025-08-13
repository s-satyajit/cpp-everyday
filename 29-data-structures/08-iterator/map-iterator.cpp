#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, int> cars = {{"mercedes", 2024}, {"bmw", 2025}, {"ford", 2019}, {"ferrari", 2022}, {"vw", 2018}};
    map<string, int>::iterator it; //or even without writing this line also work
    for(auto it = cars.begin(); it != cars.end(); it++) {
        cout << it->first << " : " << it->second << "\n";
    }
    return 0;
}