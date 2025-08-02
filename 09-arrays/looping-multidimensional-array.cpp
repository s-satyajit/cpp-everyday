#include <iostream>
using namespace std;

int main() {
    string letters[2][5] = {
        {"A", "B", "C", "D", "E"},
        {"F", "G", "H", "I", "J"}
    };

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 5; j++) {
            cout << letters[i][j] << " ";
        }
        cout << "\n";
    }
}