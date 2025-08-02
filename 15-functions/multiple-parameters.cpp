#include <iostream>
using namespace std;

void myFunction(string fname, int age) {
    cout << fname << " is " << age << " years old. \n";
}

int main() {
    myFunction("satyajit", 23),
    myFunction("sam", 22),
    myFunction("someone", 21);
    return 0;
}