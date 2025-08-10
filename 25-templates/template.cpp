#include <iostream>
using namespace std;

template <typename T>
class Box {
    public:
    T value;
    Box(T v) {
        value = v;
    }
    void show() {
        cout << "value: " << value << "\n";
    }
};

int main() {
    Box<int> intBox(50);
    Box<string> stringBox("satyajit");

    intBox.show();
    stringBox.show();
    return 0;
}