#include <iostream>
using namespace std;

int myFunction(int x, int y) {
    return x * y;
}

int main() {
    int z;
    for(int i = 1; i <= 5; i++) {
        for(int j = 2; j <= 10; j++) {
            z = myFunction(i, j);
            cout << z << endl;
        }
    }
    return 0;
}