#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> nums(6);
    fill(nums.begin(), nums.end(), 88);
    vector<int>::iterator it;
    for(it = nums.begin(); it != nums.end(); it++) {
        cout << *it << " ";
    }
    return 0;
}