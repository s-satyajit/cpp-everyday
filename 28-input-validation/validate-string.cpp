#include <iostream>
using namespace std;

int main() {
    string name;
    do {
        cout << "enter your name: ";
        // cin >> name;
        getline(cin, name);
    } while(name.empty());
    cout << "hello, " << name;
    return 0;
}