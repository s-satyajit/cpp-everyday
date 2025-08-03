#include <iostream>
using namespace std;

int main() {
    int x = 10;
    auto show = [&x](){
        cout << x;
    };
    x = 20;
    show();
    return 0;
}