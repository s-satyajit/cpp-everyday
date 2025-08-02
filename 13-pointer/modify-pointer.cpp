#include <iostream>
using namespace std;

string food = "pizza";
string* ptr = &food;

int main() {
    cout << food << "\n";
    *ptr = "hamburger";

    cout << ptr << "\n";
    cout << food << "\n";
}