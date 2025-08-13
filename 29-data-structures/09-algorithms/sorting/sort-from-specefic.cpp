#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> num = {1, 5, 23, 2, 85, 64, 934, 4, 7};
    sort(num.begin() + 3, num.end());
    for(int n : num) {
        cout << n << "\n";
    }
    return 0;
}