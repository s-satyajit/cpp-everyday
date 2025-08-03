#include <iostream>
using namespace std;

int plusFunc(int x, int y) {
    return x + y;
}

double plusFunc(double x, double y) {
    return x + y;
}

int main() {
    int result1 = plusFunc(3, 9);
    double result2 = plusFunc(3.0, 9.0);

    cout << "Result1: " << result1 << "\n";
    cout << "Result2: " << result2 << "\n";
    return 0;
}