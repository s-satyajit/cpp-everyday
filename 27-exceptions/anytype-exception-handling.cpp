#include <iostream>
using namespace std;

int main() {
    try {
        int age = 15;
        if(age >= 18) {
            cout << "access granted - you're old enough";
        } else throw 505;
    } catch (...) {
        cout << "access denied - you must be atleast 18 years old";
    }
    return 0;
}