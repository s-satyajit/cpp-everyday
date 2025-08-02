#include <iostream>
using namespace std;

string food = "pizza";
string* ptr = &food;

int main() {
    cout << food << "\n";
    cout << &food << "\n";
    cout << ptr << "\n";
}

