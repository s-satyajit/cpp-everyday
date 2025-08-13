#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> nums = {2, 34, 2, 9, 34, 39, 28, 34, 9, 85, 7, 38};
    auto it = find(nums.begin(), nums.end(), 39);
    if(it != nums.end()) {
        cout << "found!";
    }  else {
        cout << "not found";
    }
    return 0;
}