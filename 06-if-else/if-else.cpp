#include <iostream>
using namespace std;

int main() {
    const int time = 17;
    string result = (time < 18) ? "Good day" : "Good evening";
    cout << result;
    return 0;
}