#include <iostream>
using namespace std;

template <typename T>
T getMax(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    cout << getMax(3, 5) << endl;
    cout << getMax(3.5, 23.1) << endl;
    cout << getMax('a', 'z') << endl;
    return 0;
}