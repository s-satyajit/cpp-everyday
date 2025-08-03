#include <iostream>
using namespace std;

int main() {
    auto message = [](){
        cout << "Hello World!\n";
    };

    auto findType = [&message](){
        cout << typeid(message).name() << "\n";
    };

    message();
    findType();
}