#include <iostream>
using namespace std;

int main() {
    string letters[3][2][2] = {
        {
            {"A", "B"},
            {"C", "D"}
        },
        {
            {"E", "F"},
            {"G", "H"}
        },
        {
            {"I", "J"},
            {"K", "L"}
        }
    };

    letters[2][1][0] = "Z";
    cout << letters[2][1][0];
}