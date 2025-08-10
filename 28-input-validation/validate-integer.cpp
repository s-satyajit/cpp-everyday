#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "enter a number: ";
    while(!(cin >> number)) {
        cout << "invalid input, try again: ";
        cin.clear();
        cin.ignore(10000, '\n');
    }
    cout << "you entered: " << number;
}