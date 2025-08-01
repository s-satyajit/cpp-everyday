#include <iostream>
using namespace std;

int main() {
    const int number = 10;
    string result = (number % 2 == 0) ? "is even" : "is odd";
    cout << result;
    return 0;
}