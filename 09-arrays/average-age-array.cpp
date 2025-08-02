#include <iostream>
using namespace std;

int main() {
    int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};
    int length = sizeof(ages) / sizeof(ages[0]);
    
    int sum = 0;
    for(int age : ages) {
        sum+=age;
    }
    float avg = sum / length;
    cout << "the average age is: " << avg << "\n";
    return 0;
}