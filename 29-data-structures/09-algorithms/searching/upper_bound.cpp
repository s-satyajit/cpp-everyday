#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> nums = {2, 34, 2, 9, 34, 39, 28, 34, 9, 85, 7, 38};
    sort(nums.begin(), nums.end());
    auto it = upper_bound(nums.begin(), nums.end(), 4);
    cout << *it << "\n";
    return 0;
}