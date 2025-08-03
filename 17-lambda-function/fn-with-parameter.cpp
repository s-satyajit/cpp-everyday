#include <iostream>
using namespace std;

int main() {
    auto add = [](int x, int y){
        return x+y;
    };

    int result = add(2,4);
    cout << result << "\n";
    return 0;
}