#include <iostream>
using namespace std;

int plusFunc(int x, int y) {
    return x + y;
}

int plusFunc(int x, int y, int z) {
    return x + y + z;
}

int main() {
    int result2 = plusFunc(2, 3, 2);
    int result1 = plusFunc(2, 3);

    cout << "Result1: " << result1 << "\n";
    cout << "Result2: " << result2 << "\n";
    return 0;
}