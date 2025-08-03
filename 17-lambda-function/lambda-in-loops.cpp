#include <iostream>
using namespace std;

int main() {
    for(int i = 0; i <= 5; i++) {
        auto show = [i]() {
            cout << "Number: " << i << "\n";
        };
        show();
    }
    return 0;
}