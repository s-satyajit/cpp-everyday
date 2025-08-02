#include <iostream>
using namespace std;

int main() {
    int myNumbers[] = {10, 20, 30, 40, 50, 60};
    for(int i = 0; i < sizeof(myNumbers) / sizeof(myNumbers[0]); i++) {
        cout << i << "\n";
    }
}