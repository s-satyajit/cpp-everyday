#include <iostream>
using namespace std;

void myFunction(int myNum[5]) {
    for(int i = 0; i < 5; i++) {
        cout << myNum[i] << endl;
    }
}

int main() {
    int myNum[5] = {10, 20, 30, 40, 50};

    myFunction(myNum);

    return 0;
}