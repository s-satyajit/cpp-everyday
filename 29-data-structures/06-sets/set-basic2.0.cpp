#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> num = {23, 23, 3, 20, 95, 59, 38, 9, 67};
    for(int n : num) {
        cout << n << "\n";
    }
    return 0;
}