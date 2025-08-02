#include <iostream>
using namespace std;

enum Level {
    LOW = 25,
    MEDIUM = 50,
    HIGH = 75
};

int main() {
    enum Level myVar = MEDIUM;

    switch(myVar) {
        case 1:
            cout << "low level";
            break;
        case 2:
            cout << "medium level";
            break;
        case 3:
            cout << "high level";
            break;
        default:
            cout << "out of the level";
            break;
        }
    return 0;
}