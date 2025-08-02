#include <iostream>
using namespace std;

enum Level {
    LOW = 25,
    MEDIUM = 50,
    HIGH = 75
};

int main() {
    enum Level myVar = LOW;

    cout << myVar;
}