#include <iostream>
#include <functional>
using namespace std;

void myFunction(function<void()> fn) {
    fn();
    fn();
}

int main() {
    auto message = [](){
        cout << "hello world!\n";
    };

    myFunction(message);
    return 0;
}