#include <iostream>
using namespace std;

int findFactorial(int n) {
    if(n > 1) {
        return n * findFactorial(n-1);
    }
    return 1;
}

int main() {
    int result = findFactorial(5);
    cout << result << "\n";
    return 0;
}