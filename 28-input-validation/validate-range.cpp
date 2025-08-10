#include <iostream>
using namespace std;

int main() {
    int number;
    do {
        cout << "enter a number: ";
        cin >> number;
    } while (number < 1 || number > 5);
    cout << "you choose: " << number;
}