#include <iostream>
using namespace std;

int main() {
    try {
        int age = 15;
        if(age >= 18) {
            cout << "access granted - you are old enough!";
        } else {
            throw age;
        }
    } catch (int myAge) {
        cout << "access denied - you must be atlest 18 years old\n";
        cout << myAge;
    }
    return 0;
}