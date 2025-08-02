#include <iostream>
using namespace std;

void swapNumbers(int &x, int &y) {
    int z = x;
    x = y;
    y = z;
}

int main() {
    int firstNumber = 10;
    int secondNumber = 20;

    cout << "before swapping: \n";
    cout << firstNumber << " " << secondNumber << endl;
    
    swapNumbers(firstNumber, secondNumber);

    cout << "after swapping: \n";
    cout << firstNumber << " " << secondNumber;

    return 0;
}