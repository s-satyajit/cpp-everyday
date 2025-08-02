#include <iostream>
using namespace std;

int myFunction(int x) {
    return x*2;
}

int main() {
    for(int i = 1; i <= 5; i++) {
        cout << "double of " << i << " is: " << myFunction(i) << endl;
    }
    return 0;
}