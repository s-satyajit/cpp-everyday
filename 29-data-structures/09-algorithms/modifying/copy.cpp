#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> nums = {2, 34, 2, 9, 34, 39, 28, 34, 9, 85, 7, 38};
    sort(nums.rbegin(), nums.rend());
    vector<int> copiedNums(12);
    copy(nums.begin(), nums.end(), copiedNums.begin());
    vector<int>::iterator it;
    for(auto it = copiedNums.begin(); it != copiedNums.end(); ++it) {
        cout << *it << " ";
    }
    return 0;
}