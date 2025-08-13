#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> nums = {2, 34, 2, 9, 34, 39, 28, 34, 9, 85, 7, 38};
    auto findNum = min_element(nums.begin(), nums.end());
    cout << *findNum << "\n";
    return 0;
}