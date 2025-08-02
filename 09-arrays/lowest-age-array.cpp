#include <iostream>
using namespace std;

int main() {
    int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};
    int lowest = ages[0];
    for(int i = 0; i < sizeof(ages[0]); i++) {
        if(ages[i] < ages[0])
            lowest = ages[i];
    }
    cout << "lowest age is: " << lowest << "\n";
}