#include <iostream>
using namespace std;

int main() {
    int x = 10;
    auto show = [x](){
        cout << x;
    };
    show();
    return 0;
}