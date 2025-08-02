#include <iostream>
using namespace std;

int main() {
    string letters[2][5] = {
        {"A", "B", "C", "D", "E"},
        {"F", "G", "H", "I", "J"}
    };
    letters[1][4] = "Z";

    cout << letters[1][4];
}