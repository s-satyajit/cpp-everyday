#include <iostream>
using namespace std;

void myFunction(string country = "norway") {
    cout << country << endl;
}

int main() {
    myFunction("sweden");
    myFunction("india");
    myFunction();
    myFunction("usa");
    return 0;
}