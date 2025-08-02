#include <iostream>
using namespace std;

void modifyGreet(string &greet) {
    greet += " world!";
}

int main() {
    string greet = "hello";

    modifyGreet(greet);

    cout << greet;

    return 0;
}