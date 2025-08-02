#include <iostream>
using namespace std;

int main() {
    int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};
    int length = sizeof(ages) / sizeof(ages[0]);

    int lowest = ages[0];

    for(int age: ages) {
        if(lowest > age)
            lowest = age;
    }
    cout << "the lowest age is: " << lowest << "\n";
}