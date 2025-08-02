#include <iostream>
using namespace std;

int main() {
    int numGuests;
    cout << "enter the number of guests: ";
    cin >> numGuests;

    if(numGuests < 0) {
        cout << "Number of guests must be atleast 1. \n";
        return 0;
    }

    string* guests = new string[numGuests];

    for(int i = 0; i < numGuests; i++) {
        cout << "enter the name for guest: " << (i+1);
        cin >> guests[i];
    }

    for(int i = 0; i < numGuests; i++) {
        cout << guests[i] << endl;
    }

}